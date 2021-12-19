#prendo la lista di parole e la trasformo in un dizionario (python) dove:
#-la chiave è una tupla (lunghezza, iniziale), dove <lunghezza> mi dice quanto
#-sono lunghe le parole che stanno nella chiave, e <iniziale> mi dice la lettera
#iniziale di tutte le parole nella chiave
#-la chiave è una lista di parole che sono lunghe a quella maniera e cominciano
#con quella lettera
#SCHERZAVO HAHAHAHA

t9_dict = {"2": ["a", "b", "c"], "3": ["d", "e", "f"],"4": ["g", "h", "i"], "5": ["j", "k", "l"],
           "6": ["m", "n", "o"],"7": ["p", "q", "r", "s"],"8": ["t", "u", "v"],"9": ["w", "x", "y", "z"],}

#Funzione di lorenzo: l'idea è prendere le parole dal dizionario, convertirle nelle digit,
#e aggiungere la coppia digits-parola a un nuovo dizionario nel seguente modo:
#chiave: le digits
#valore: la lista delle parole corrispondenti a quelle digits

def list_to_dict(list_of_words):
    dict_lorenzo = {}
    for word in list_of_words:
        digits = word_to_digits(word)
        if digits in dict_lorenzo.keys():
            dict_lorenzo[digits].append(word)
        else:
            dict_lorenzo[digits] = [word]
    return dict_lorenzo

def translate(sentence, my_dict):
    #controllo
    if sentence[-1] == "\n":
        sentence = sentence[:-1]

    #prendo le parole
    list_of_digits = sentence.split(" ")

    list_of_words = [my_dict[digits] for digits in list_of_digits]

    #array_of_final_strings = []
    #array_of_final_strings_2 = []
    #for words in list_of_words:
    #    array_of_final_strings_2 = []
        #caso base: la lista non ha nulla
    #    if len(array_of_final_strings) == 0:
    #        for word in words:
    #            array_of_final_strings.append(word)
    #        #array_of_final_strings.append([word for word in words])
    #        print("init = " + str(array_of_final_strings))
    #        continue

    #    for i in range(len(array_of_final_strings)):
    #        for word in words:
    #            array_of_final_strings_2.append(array_of_final_strings[i] + " " + word)
    #    array_of_final_strings = array_of_final_strings_2[:]

    array_of_final_strings = []
    #array_of_final_strings = [[word for word in words] if (len(array_of_final_strings) == 0) else [[str(array_of_final_strings[i] + " " + word) for i in range(len(array_of_final_strings))] for word in words] for words in list_of_words]
    #print("CIAO!!!", array_of_final_strings[0])
    #return array_of_final_strings

    for words in list_of_words:
        array_of_final_strings_2 = []
        # caso base: la lista non ha nulla
        if len(array_of_final_strings) == 0:
            array_of_final_strings = [word for word in words]
            print("init = " + str(array_of_final_strings))
            continue
        else:
            array_of_final_strings = [str(array_of_final_strings[i] + " " + word)
                                  for i in range(len(array_of_final_strings)) for word in words]

    return array_of_final_strings

def word_to_digits(word):
    return "".join([k for letter in word for k, v in t9_dict.items() if letter in v])

if __name__ == '__main__':
    #apriamo il file
    file_words = open("C:\\Users\\aless\\PycharmProjects\\Es2Meta\\dictionary.txt", "r")
    list_of_words = []
    for word in file_words:
        word = word[:-1]
        list_of_words.append(word)
    #print(list_of_words)

    dict_lorenzo = list_to_dict(list_of_words)
    file_sentences = open("C:\\Users\\aless\\PycharmProjects\\Es2Meta\\t9_texts.txt", "r")
    list_of_sentences = file_sentences.readlines()
    print(list_of_sentences)
    for sentence in list_of_sentences:
        tr = translate(sentence, dict_lorenzo)

        #controllo duplicati
        for i in range(len(tr)):
            for j in range(i+1, len(tr)):
                if tr[i] == tr[j]:
                    print("voglio morire")

        for elem in tr:
            print(elem)


