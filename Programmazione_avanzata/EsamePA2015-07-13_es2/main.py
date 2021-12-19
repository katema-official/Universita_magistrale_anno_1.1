import re

class UpDownFile:
    def __init__(self, file_name):
        self.file = open(file_name)
        self.list_of_words = re.findall(r"\w+", self.file.read())

    def __iter__(self):
        self.index = 0
        return self

    def __next__(self):
        if self.index > len(self.list_of_words) -1:
            raise StopIteration
        self.index += 1
        return self.list_of_words[self.index - 1]

    def ungetw(self):
        if self.index > 0:
            self.index -= 1



if __name__ == '__main__':
    fiter = UpDownFile('wikipedia-excerpt.txt')
    iter(fiter)
    print('### Let\'s go up and down for a while')
    print(next(fiter))
    print(next(fiter))
    print(next(fiter))
    print(next(fiter))
    print(next(fiter))
    print(next(fiter))
    fiter.ungetw()
    fiter.ungetw()
    fiter.ungetw()
    print(next(fiter))
    print(next(fiter))
    fiter.ungetw()
    fiter.ungetw()
    print(next(fiter))
    fiter.ungetw()
    fiter.ungetw()
    fiter.ungetw()
    print(next(fiter))
    print(next(fiter))
    print(next(fiter))
    fiter.ungetw()
    print('### Let\'s finish the iteration')
    try:
        while True:
            print(next(fiter))
    except StopIteration:
        pass
    print('### Let\'s restart the iteration')
    iter(fiter)
    print(next(fiter))
    print(next(fiter))
    print(next(fiter))
    fiter.ungetw()
    print(next(fiter))
