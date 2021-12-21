import inspect

#ho promosso 0 studenti in 5 sessioni
class RecursiveEx(Exception):
    def __init__(self, *args, **kargs):
        self.args = args
        self.kargs = kargs

#l'eccezione sfila un frame dopo aver calcolato gli elementi successivi
#l'inspect ci serve quando il frame sottostante è uguale al frame corrente.
def tail_recursion(f):
    def wrapper(*args, **kargs):
        stack = inspect.stack()
        if len(stack) > 3 and stack[1].frame.f_code == stack[3].frame.f_code:
            raise RecursiveEx(*args, **kargs)
        else:
            try:
                return f(*args, **kargs)
            except RecursiveEx as r:
                return f(*r.args, **r.kargs)


        #print("0 = ", inspect.currentframe().f_back.f_back)
        #print("1 = ", inspect.currentframe().f_code)
        #if(inspect.currentframe().f_back.f_back == None): # and inspect.currentframe().f_code != inspect.currentframe().f_back.f_back.f_code):
        #    print("caso base")
        #    try:
        #        f(*args, **kargs)
        #    except RecursiveEx as r:
        #        f(*r.args, **r.kargs)
        #else:
        #    print("caso ricorsivo")
        #    raise RecursiveEx(*args, **kargs)
        #print("stack 0 = " + str(inspect.stack()[1]))
        #print("stack 1 = " + str(inspect.stack()[3]))
        #frames = inspect.getouterframes(inspect.currentframe())
        #print("actual frame = " + str(inspect.currentframe()))
        #print("prec frame = " + str(frames[-2]))
        #return f(*args, **kargs)
    return wrapper


@tail_recursion
def tfact(n, acc = 1):
    if n == 0:
        return acc
    #print(inspect.stack())
    print("------------------")
    #print(inspect.getframeinfo(inspect.currentframe()))
    print(inspect.currentframe().f_locals)
    #print(inspect.currentframe().f_back)
    #print(inspect.currentframe().f_code)
    return tfact(n-1, n*acc)

if __name__ == '__main__':
    print(tfact(100))



#in realtà è questa la soluzione del Professore
'''
import sys
    class TailRecurseException(Exception):
    def __init__(self, args, kargs):
    self.args = args
    self.kargs = kargs

def tail_recursion(g):
    def func(*args, **kargs):
        f = sys._getframe()
        if f.f_back and f.f_back.f_back and f.f_back.f_back.f_code == f.f_code:
            raise TailRecurseException(args, kargs)
        else:
            while 1:
                try:
                    return g(*args, **kargs)
                except TailRecurseException as e:
                    args = e.args
                    kargs = e.kar
    return func
'''