
def multi_triggered(times, op):
    def decorator(f):
        def wrapper(self, *args, **kargs):
            wrapper.t += 1
            if(len(wrapper.a) == 0 and len(wrapper.k) == 0):
                wrapper.a = args
                wrapper.k = kargs
                #print("a = " + str(args) + ", k = " + str(kargs))
            else:
                wrapper.a = [op(wrapper.a[i], args[i]) for i in range(len(args))]
                wrapper.k = {op(wrapper.k[i], kargs[i]) for i in range(len(kargs))}
            if wrapper.t == times:
                wrapper.t = 0
                return f(self, *wrapper.a, *wrapper.k)

        wrapper.t = 0
        wrapper.a = []
        wrapper.k = []
        return wrapper
    return decorator


class ToBeMultiTriggered:
    def m1(self):
        print("### m1 has been called!")
    @multi_triggered(2, lambda x,y: x*y)
    def m2(self, i):
        print("### m2({0}) has been called!".format(i))
    @multi_triggered(3, lambda x, y: x + y)
    def m3(self, x, y):
        print("### m3({0},{1}) has been called!".format(x,y))


if __name__ == '__main__':
    t = ToBeMultiTriggered()
    t.m1()
    t.m2(7)
    t.m3(5, 3)
    t.m2(3)
    t.m3(3, 2)
    t.m3(5, 1)