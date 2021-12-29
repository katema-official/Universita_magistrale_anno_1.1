#Non avendo il file txt con il dizionario ho dovuto immaginare come dovesse essere
#tale file, e ho basato l'implementazione su di lui.
def replace_synonyms(s):
    filesin = open("sinonimi.txt")
    dictsin = {}
    for line in filesin.readlines():
        dictsin[line.rsplit(":")[0]] = [elem[:-1] if (elem[-1] == "\n") else elem for elem in (line.rsplit(":")[1].rsplit(","))]
    for word in s.strip(".").split(" "):
        for k,v in dictsin.items():
            if word in v:
                s = s.replace(word, k.upper())
    return s

if __name__ == "__main__":
    s0 = "The deadline is approximately midnight though it could vary."
    s1 = "She is a fascinating lady; she has an astonishing smile, an alluring voice and an entertaining sense of humor."
    s2 = "The topic is appealing nevertheless the speaker was too monotonous."
    print(replace_synonyms(s0))
    print(replace_synonyms(s1))
    print(replace_synonyms(s2))
