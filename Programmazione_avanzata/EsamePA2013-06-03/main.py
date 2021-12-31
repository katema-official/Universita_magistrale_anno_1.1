#L'output di questo programma non è equivalente a quello del professore, ma è comunque ottimo:
#trova in fatti lo stesso numero minimo di inserzioni, semplicemente trova lettere diverse da inserire
def rec(word, res):   #word = [inizio, centro, fine, caratteri aggiunti]
    if len(word[1]) > 1:
        if word[1][0] == word[1][-1]:   #otto
            first_last = word[1][0]
            middle = word[1][1:-1]
            rec([word[0] + first_last, middle, first_last + word[2], word[3]], res)
        else:                           #casa
            first = word[1][0]
            last = word[1][-1]
            middle = word[1][1:-1]
            rec([word[0] + first, middle + last, first + word[2], word[3] + [first]], res)
            #print(word[0] + last, first + middle, last + word[2], word[3] + [last])
            rec([word[0] + last, first + middle, last + word[2], word[3] + [last]], res)
    else:
        res += [(word[0] + word[1] + word[2], word[3])]   #tupla con prima la parola palindroma, poi le aggiunte
        return

def palin(word):
    possible_results = []
    rec(["", word, "", []], possible_results)
    min = len(possible_results[0][1])
    actual_res = possible_results[0]
    for r in possible_results[1:]:
        if len(r[1]) < min:
            min = len(r[1])
            actual_res = r
    return "The word «{0}» needs {1} insertions to become palindrome ({3}): {2}"\
        .format(word, len(actual_res[1]), actual_res[1], actual_res[0])

if __name__ == '__main__':
    print(palin("casa"))
    print(palin("otto"))
    print(palin("palindromo"))
    print(palin("posero"))
    print(palin("coccinella"))