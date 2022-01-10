#Bisogna scrivere una metaclasse che implementi la deep copy
#quando si usa l'operatore =, and binding this to the standard class list
#(note the deep copy is limited to instances of the list class).

class myMeta(type):
    def __new__(meta, classname, supers, classdict):
        print("In MetaOne.new: ", classname, supers, classdict, sep ="\n...")
        print("...new class object: ", list(meta.__dict__.keys()))
        for k, v in classdict.items():
            print("k is " + str(k) + ", v is " + str(v))
        for k, v in meta.__dict__.items():
            print("k is " + str(k) + ", v is " + str(v))
        return type.__new__(meta, classname, supers, classdict)

    def __init__(Class, classname, supers, classdict):
        print("In MetaOne init: ", classname, supers, classdict, sep ="\n...")
        print("...init class object: ", list(Class.__dict__.keys()))
        print("what: " + str(Class.__dict__["__dict__"]))
        for k,v in classdict.items():
            print("k is " +str(k) + ", v is " + str(v))


#init   non ho ancora l'oggetto (oggetto classe), non ho ancora il dizionario
#new    ho già l'oggetto (oggetto classe), ho già il dizionario
#call   chiamata dopo che l'oggetto classe è stato definito completamente


class List(metaclass=myMeta): pass


if __name__ == '__main__':
   l = [1,2,3]