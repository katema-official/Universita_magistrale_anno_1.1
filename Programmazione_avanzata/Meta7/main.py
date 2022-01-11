#Bisogna scrivere una metaclasse che implementi la deep copy
#quando si usa l'operatore =, and binding this to the standard class list
#(note the deep copy is limited to instances of the list class).
import inspect
import re

def __setitem__(self, attr, value):
    print("attr is: " + str(attr))
    print("value is: " + str(value))
    if isinstance(attr, list):
        print("OOOHHH")

def __init__(self):
    print("Sono una nuova lista")
    print(self.__dict__)

class myMeta(type):
    def __new__(meta, classname, supers, classdict):
        print("In MetaOne.new: ", classname, supers, classdict, sep ="\n...")
        print("...new class object: ", list(meta.__dict__.keys()))



        classdict["__setitem__"] = __setitem__
        classdict["__init__"] = __init__

        for k, v in classdict.items():
            print("CLASSDICT k is " + str(k) + ", v is " + str(v))
        for k, v in meta.__dict__.items():
            print("META k is " + str(k) + ", v is " + str(v))
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


class list(metaclass=myMeta): pass


if __name__ == '__main__':
    print("attributi di list (classe): " + str(list.__class__.__dict__))
    print("attributi di list (istanza): " + str(list.__dict__))
    print("attributi di list (istanza): " + str(list.__dict__["__weakref__"]))
    print(eval(list.__dict__["__weakref__"]))

    l = list()
    l = [1,2,3]






#Davide
def deep_copy(listt):
    new_list = []
    for elem in listt:
        if not isinstance(listt, list):
            new_list.append(elem)
        else:
            new_list.append(deep_copy(elem))
    return new_list[:]


def __del__(self):
    stack = inspect.currentframe()
    caller = inspect.currentframe().f_back.f_code
    origin = caller.split("=")[1]
    call_dict = stack.f_back.f_locals
    dest = caller.split("=")[0]
    call_dict[dest] = deepcopy(call_dict[origin]))



#soluzione prof

from pprint import pprint
def deepcopy(l):
    lcopy = list()
    for elem in l:
        if type(elem) is list:
            lcopy.append(deepcopy(elem))
        else:
            lcopy.append(elem)
    return lcopy

def delete(self):
    current_frame = inspect.currentframe()
    outer_frame = current_frame.f_back
    try:
        assignment = inspect.getframeinfo(outer_frame).code_context[0]
    except AttributeError: return
    m = re.search("([a-zA-Z][a-zA-Z0-9_]*)[ ]*=[ ]*(.*)$", assignment)
    outer_frame.f_locals[m.group(1)] = deepcopy(eval(m.group(2), outer_frame.f_locals))

class DeepCopyList(type):
    def __new__(typmeta, classname, supers, classdict):
        classdict["__del__" = delete
        return type.__new__(meta, classname, supers, classdict)
    def __init__(clazz, classname, supers, classdict):
        return supers.__init__(clazz, classname, supers, classdict)

original_list = list

list = DeepCopyList("list", (original_list,), dict(list.__dict__))

