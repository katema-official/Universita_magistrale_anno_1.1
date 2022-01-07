import unittest

class TestClass:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.z = 0
    def getx(self): return self.x
    def getz(self): return self.z
    def setz(self, x): self.z = x

class TestClass2(TestClass):
    def sety(self, z): self.y=z
    def gety(self): return self.y

def get_all_methods(clazz, methods):
    methods += clazz.__dict__.keys()
    if clazz.__name__ != "object":
        for parent in clazz.__bases__:
            print("parent = " + parent.__name__)
            methods += get_all_methods(parent, methods[:])
    return methods

def SelectorPresenceTest(clazz, inztance):
    class wrapper(unittest.TestCase):
        def test_getters(self):
            pippo = [el for el in inztance.__dict__.keys()]
            print("pippo = " + str(pippo))
            methods_i_want = set(map(lambda x : "get" + x, pippo))
            #nota: hasattr va a controllare anche gli attributi del/dei padri.
            ms = get_all_methods(clazz, [])
            for m in methods_i_want:
                    self.assertIn(m, ms, "AssertionError: Warning! " + str(m) + " doesn’t exists!!!")

        def test_setters(self):
            pippo = [el for el in inztance.__dict__.keys()]
            methods_i_want = set(map(lambda x: "set" + x, pippo))
            ms = get_all_methods(clazz, [])
            for m in methods_i_want:
                self.assertIn(m, ms)

    return wrapper


ClassesToTest = [SelectorPresenceTest(TestClass, TestClass(7,25)),
                 SelectorPresenceTest(TestClass2, TestClass2(7,25))
]






class NumbersTest(unittest.TestCase):
    def test_even(self):
        print("5")
        for i in range(0, 6):
            with self.subTest(i=i):
                self.assertEqual(i % 2, 0)

if __name__ == '__main__':
    suite = unittest.TestSuite()
    for tc in ClassesToTest:
        suite.addTests(unittest.TestLoader().loadTestsFromTestCase(tc))
    unittest.TextTestRunner(verbosity=2).run(suite)

    #suite.addTests(unittest.TestLoader().loadTestsFromTestCase(NumbersTest))
    #unittest.TextTestRunner(verbosity=2).run(suite)
