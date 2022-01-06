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

def SelectorPresenceTest(clazz, inztance):
    print("1")
    class wrapper(unittest.TestCase):
        print("2")
        def get_test(self):
            print("3")
            #pippo = [el for el in inztance.__dict__.keys()]
            #print(pippo)

            data = [1, 2, 3]
            result = sum(data)
            self.assertEqual(result, 7)
            for i in range(1):
                with self.subTest(i = i):
                    self.assertEqual("pippo", 0)
        def pippo(self):
            self.assertEqual(1, 0)
    print("4")
    return wrapper


ClassesToTest = [SelectorPresenceTest(TestClass, TestClass(7,25)),
                 SelectorPresenceTest(TestClass2, TestClass2(7,25))
]






class NumbersTest(unittest.TestCase):
    def test_even(self):
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
