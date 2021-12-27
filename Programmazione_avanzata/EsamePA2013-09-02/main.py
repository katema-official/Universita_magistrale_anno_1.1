from threading import *

class MyThread(Thread):
    def __init__(self, target, *args, **kwargs):
        Thread.__init__(self)
        self.target = target
        self.args = tuple(args)
        self.kwargs = dict(kwargs)
        self.result = None
    def run(self):
        self.result = self.target(*self.args, **self.kwargs)

class asynchronous:
   def __init__(self, f):
       self.function = f
       self.result = None
       self.thread = None

   def __call__(self, *args, **kwargs):
       return self.function(*args, **kwargs)

   def start(self, *args, **kwargs):
       self.thread = MyThread(self.function, *args, **kwargs)
       self.result = self.thread.start()
       return self

   def is_done(self):
       return not self.thread.is_alive()

   def get_result(self):
       if self.is_done():
           return self.thread.result
       else:
           raise NotYetDoneException()

class NotYetDoneException(Exception):
    def __init__(self):
        self.message = "the call has not yet completed its task"

if __name__ == "__main__":
    import time
    @asynchronous
    def long_process(num):
        time.sleep(10)
        return num * num

    result = long_process.start(12)

    for i in range(20):
        time.sleep(1)
        if result.is_done():
            print("[{1}]: result {0}".format(result.get_result(), i))
        else: print("[{0}]: not ready yet".format(i))

    result2 = long_process.start(13)

    try:
        print("result2 {0}".format(result2.get_result()))
    except NotYetDoneException as ex:
        print(ex.message)