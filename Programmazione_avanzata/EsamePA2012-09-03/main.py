
def perm_four2(n, m):
    return rec2([], n, m)

def rec2(l, n, m):
    if len(l) == n: yield l
    for i in range(1,m+1):
        if i not in l:
            l.append(i)
            for x in rec2(l[:], n, m):
                yield x
            l = l[:-1]

def perm_four():
    return rec([])

def rec(l):     #ma... è una funzione per generare le permutazioni di n elementi! da m a n volendo!
                #basta cambiare 1,5 con m,n. Daje
    if len(l) >= 4: yield l         #è come se poi ci fosse un else, dato che if i not in l
    for i in range(1,5):            #dà sempre falso
        if i not in l:
            l.append(i)
            for x in rec(l[:]):     #da tatuarsi per fare una ricorsione con lo yield
                yield x
            l = l[:-1]

#------------------INIZIO ESERCIZIO------------------

dict_words = dict()
file = open("wordlist.txt")
for word in file.readlines():
    key = word[0] + word[-2]
    if key in dict_words.keys():
        dict_words[key] += [word[:-1]]
    else:
        dict_words[key] = [word[:-1]]

def get_row_from_char(char):
    rows_of_keyboard = {"qwertyuiop'":0, "asdfghjkl":1, "zxcvbnm-":2}
    for k, v in rows_of_keyboard.items():
        if char in k:
            return v
    print("char " + str(char) + " is in row number " + str(v))
    print("ALEssio")

def davide(swipe):
    prec_index_of_char = get_row_from_char(swipe[0])
    #if swipe == "vghjioiuhgvcxsasdvbhuiklkjhgfdsaserty": print(prec_index_of_char)
    counter = 1
    pendenza = -1  # 0 = scendi, 1 = sali
    for char in swipe[1:]:
        index_of_row = get_row_from_char(char)
        if index_of_row == prec_index_of_char:
            pass
        elif index_of_row > prec_index_of_char and pendenza != 0:
            counter += 1
            pendenza = 0
        elif index_of_row < prec_index_of_char and pendenza != 1:
            counter += 1
            pendenza = 1
        prec_index_of_char = index_of_row

    return counter


def get_suggestion(swipe):
    ret = []
    rows_of_keyboard = ["qwertyuiop", "asdfghjkl", "zxcvbnm"]
    first_and_last = swipe[0] + swipe[-1]
    len_possible_words = 1
    counter = davide(swipe)

    possible_words_in_dict = [elem for elem in dict_words[first_and_last] if len(elem) >= counter]
    #if swipe == "asdfgrtyuijhvcvghuiklkjuytyuytre": print(str(davide(swipe)) + " AAA " + str(possible_words_in_dict))
    davidee = []
    for wordd in possible_words_in_dict:
        if check_word(wordd, swipe):
            davidee.append(wordd)
    return davidee


def check_word(word, swipe):
    for c in word:
        if c in swipe:
            swipe = swipe[swipe.find(c)+1:]
        else:
            return False
    return True


if __name__ == '__main__':
    #for i in perm_four2(3, 4):
    #    print(i)
    #print("-----------")
    #l = []
    #for i in perm_four():
    #    if i[:-1] not in l:
    #        l.append(i[:-1])
    #print(l)

    #----------INIZIO MAIN ESAME------------
    test_cases = \
        ["heqerqllo",  # hello
    "qwertyuihgfcvbnjk",  # quick
    "wertyuioiuytrtghjklkjhgfd",  # world
    "dfghjioijhgvcftyuioiuytr",  # doctor
    "aserfcvghjiuytedcftyuytre",  # architecture
    "asdfgrtyuijhvcvghuiklkjuytyuytre",  # agriculture
    "mjuytfdsdftyuiuhgvc",  # music
    "vghjioiuhgvcxsasdvbhuiklkjhgfdsaserty",  # vocabulary
    ]

    for test in test_cases:
        print(get_suggestion(test))