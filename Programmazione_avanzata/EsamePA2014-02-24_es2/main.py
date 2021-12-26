#Completamente trial and error questa funzione, wow.
def gray(n):
    if n == 1:
        yield "0"
        yield "1"
    else:
        i = 0
        for g in gray(n-1):
            if i % 2 == 0:
                yield g + "0"
                yield g + "1"
            else:
                yield g + "1"
                yield g + "0"
            i += 1

def memoization(f):
    def wrapper(*args, **kargs):
        #controllo se nel dizionario ho giàm un gray code più corto (e prendo il più lungo disponibile)
        longest_gray_code = 0
        for i in range(args[0], -1, -1):
            if i in wrapper.cache.keys():
                longest_gray_code = i
                break
        #se ce l'ho già, lo stampo, e lo uso per calcolare il nuovo gray code
        if longest_gray_code > 0:
            print("### cached value for " + str(longest_gray_code) + " --> " + str(wrapper.cache[longest_gray_code]))
            #se ho già il risultato preciso, ho finito
            if longest_gray_code == args[0]:
                return wrapper.cache[longest_gray_code]
            else:
                #altrimenti, me lo calcolo pian piano.
                #sub è il grey code che devo per forza calcolare, e che poi apporrò
                #al gray code calcolato precedentemente e conservato nella cache
                sub = gray(args[0] - longest_gray_code)
                #devo concatenare il sub gray code a quello già calcolato
                new_gray_code = []
                i = 0
                for elem in sub:
                    if i % 2 == 0:
                        for actual in wrapper.cache[longest_gray_code]:
                            new_gray_code.append(elem + actual)
                    else:
                        for actual in wrapper.cache[longest_gray_code][::-1]:
                            new_gray_code.append(elem + actual)
                    i += 1
        else:
            #calcolo ex novo questo gray code
            new_gray_code = f(*args, **kargs)
        #salvo nella cache il risultato
        wrapper.cache[args[0]] = [g for g in new_gray_code]
        return wrapper.cache[args[0]]

    wrapper.cache = {}
    return wrapper

@memoization
def mgray(n):
    return gray(n)


if __name__ == '__main__':
    print("GC(1) :-", end=" ")
    for gc in gray(1): print(gc, end=" ")
    print("\nGC(2) :-", end=" ")
    for gc in gray(2): print(gc, end=" ")
    print("\nGC(3) :-", end=" ")
    for gc in gray(3): print(gc, end=" ")
    print("\nGC(4) :-", end=" ")
    for gc in gray(4): print(gc, end=" ")
    print()
    print("GC_(1) :-", end=" ")
    for gc in mgray(1): print(gc, end=" ")
    print("\nGC_(2) :-", end=" ")
    for gc in mgray(2): print(gc, end=" ")
    print("\nGC_(3) :-", end=" ")
    for gc in mgray(3): print(gc, end=" ")
    print("\nGC_(4) :-", end=" ")
    for gc in mgray(4): print(gc, end=" ")
    print()