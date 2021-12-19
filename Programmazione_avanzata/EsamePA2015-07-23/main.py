LIST_LORENZO = []
list_of_words = []

def DEBUG(s):
    if True:
        print("DEBUG: " + s)

#true se le due parole hanno una sola lettera di differenza,false altrimenti
def hamming_distance(w1, w2):
    counter = 0
    l = zip(w1, w2)
    for tuplee in l:
        if tuplee[0] != tuplee[1]:
            counter += 1
        if counter == 2:
            return False
    return True

class next_words_generator:
    def __init__(self, start, already_seen):
        self.start = start
        self.already_seen = already_seen

    def __iter__(self):
        self.index = 0
        return self

    def __next__(self):
        while self.index < len(list_of_words):
            self.index += 1
            if hamming_distance(self.start, list_of_words[self.index-1]):
                if list_of_words[self.index-1] not in self.already_seen:
                    return list_of_words[self.index-1]
        raise StopIteration

def chain(start, end):

    rec(start, end, [])

#witness, fatness
def rec(start, end, accum):
    accum.append(start)
    if start == end:
        LIST_LORENZO.append(accum)
        return
    else:
        next_words = next_words_generator(start, accum)
        for word in next_words:
            rec(word, end, accum[:])
        return


if __name__ == '__main__':
    my_file = open("dictionary-7.txt")
    list_of_words = [word[:-1] for word in my_file.readlines()]
    #print(list_of_words)

    chain("witness", "fatness")
    for l in LIST_LORENZO:
        print(l)

    print("------------------")
    LIST_LORENZO = []
    chain("warning", "earring")
    for l in LIST_LORENZO:
        print(l)

    print("------------------")
    LIST_LORENZO = []
    chain("sailing", "writing")
    for l in LIST_LORENZO:
        print(l)