def magic(child_class):             #empty
    def wrapper(parent_class):      #person
        class instance:
            def __init__(self, *args, **kargs):
                self.actual_parent_instance = parent_class(*args, **kargs)
            def __getattr__(self, item):
                for key, value in self.actual_parent_instance.__dict__.items():
                    setattr(child_class, key, value)
                x = getattr(self.actual_parent_instance, item)
                setattr(child_class, item, x)
                return x
            def __setattr__(self, key, value):
                if key == "actual_parent_instance":
                    self.__dict__[key] = value
                else:
                    setattr(self.actual_parent_instance, key, value)
        return instance
    return wrapper


class Empty: pass

@magic(Empty)
class Person:
    def __init__(self, name, gross, netp):
        self.gross_salary = gross
        self.netpercentage = netp
        self.name = name
    def who(self): return self.name
    def salary(self): return self.gross_salary*self.netpercentage/12

@magic(Empty)
class Exam:
    def __init__(self, title, n, ne):
        self.title = title
        self.students = n
        self.exams = ne
    def todo(self):
        return "still {} students should pass the {} exam".format(
            self.students-self.exams, self.title)

if __name__ == "__main__":
    m = Empty()
    x = Exam("PA", 100, 15)
    y = Exam("TSP", 50, 45)
    p = Person("Bob", 100000, .6)

    try:
        print("m salary :- ",m.salary())
    except Exception as e: print("*** {0}: {1}".format(type(e).__name__, e))
    print("p salary :- ", p.salary())
    print("m salary :- ", m.salary())
    try:
        print("m todo :- ", m.todo())
    except Exception as e: print("*** {0}: {1}".format(type(e).__name__, e))
    print("x todo :- ", x.todo())
    print("m todo :- ", m.todo())
    p.netpercentage=.45
    print("m salary :- ", m.salary())
    print("y todo :- ", y.todo())
    print("m todo :- ", m.todo())
    print("m students :- ",m.students)
    print("x todo :- ", x.todo())
    print("m students :- ",m.students)
    try:
        print("m who :- ",m.who)
    except Exception as e: print("*** {0}: {1}".format(type(e).__name__, e))
