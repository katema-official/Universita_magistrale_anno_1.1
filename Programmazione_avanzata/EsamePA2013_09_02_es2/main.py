def fib():
    x,y = 1,1
    while True:
        yield x
        x,y = y, x+y
#generatori
def even(gen):
    while True:
        current = next(gen)
        if current%2 == 0:
            yield current
def stopAt(gen, limit):
    while True:
        current = next(gen)
        if current <= limit:
            yield current
        else:
            break
def buffer(gen, length):
    chunk = []
    while True:
        try:
            current = next(gen)
        except StopIteration:
            yield chunk
            break
        if len(chunk) < length:
            chunk.append(current)
        if len(chunk) == length:
            yield chunk
            chunk = []
def conditional(gen, function):
    try:
        current = next(gen)
        while True:
            successive = next(gen)
            if function(successive):
                yield current
            current = successive
    except StopIteration:
        pass
if __name__ == "__main__":
    even_fib = even(fib())
    for i in range(10): print(next(even_fib), end=" ")
    print()
    for i in stopAt(even(fib()), 40000000): print(i, end=" ")
    print()
    buffered_limited_fib = buffer(stopAt(fib(),3000), 5)
    for i in buffered_limited_fib: print(i)
    condfib = conditional(fib(), lambda x: (x%2 == 0))
    for i in range(10): print(next(condfib), end=" ")
    print()
    condfib2 = conditional(fib(), lambda x: (x%2 != 0))
    for i in range(15): print(next(condfib2), end=" ")
    print()
