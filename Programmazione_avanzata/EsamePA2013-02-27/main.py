dict_words = set()
with open("wordlist.txt") as file:
    dict_words = set([word[:-1] for word in file.readlines()])

def ruzzles(list_of_words):
    #trasformo la lista di parole in una lista di liste di tuple
    new_list_of_words = []
    for word in list_of_words:
        new_list_of_words.append([(char, "0") for char in word])
    list_of_solutions = set()
    for i,word in enumerate(list_of_words):
        for j,char_and_bit in enumerate(word):
            rec("", [row[:] for row in new_list_of_words], j, i, list_of_solutions)
    list_of_solutions = sorted(list(list_of_solutions))
    return list_of_solutions

def rec(actual_string, grid, x, y, solutions):
    #caso base: sono uscito oppure sto tornando su un cammino già visitato
    if x > 3 or x < 0 or y < 0 or y > 3:
        return
    elif grid[x][y][1] == "1":
        return
    actual_string += grid[x][y][0]
    if len(actual_string) >= 3 and actual_string in dict_words:
        solutions.add(actual_string)
    grid[x][y] = (grid[x][y][0], "1")
    #devo fare 4 chiamate ricorsive
    rec(actual_string, [row[:] for row in grid], x+1, y, solutions)
    rec(actual_string, [row[:] for row in grid], x, y+1, solutions)
    rec(actual_string, [row[:] for row in grid], x-1, y, solutions)
    rec(actual_string, [row[:] for row in grid], x, y-1, solutions)


def test_properties(result, grid):
    print("alphabetically sorted: " + str(result == sorted(result)))
    #3 modi per fare la stessa cosa
    print("all english words: " + str(all(map(lambda x: x in dict_words, result))))
    import functools
    print("all english words: " + str(functools.reduce(lambda x, y: x and y, map(lambda x: x in dict_words, result))))
    print("all english words: " + str([word for word in result if word not in dict_words] == []))
    print("all word are ammissible: " + str([word for word in result if len(word) < 3 or len(word) > 16] == []))
    print("all words are really in the grid: " + str(all([check_correctness(word, grid) for word in result])))
    dict_letters_grid = dict()
    for word in grid:
        for char in word:
            if char in dict_letters_grid:
                dict_letters_grid[char] += 1
            else:
                dict_letters_grid[char] = 1
    final_res = True
    for word in result:
        my_copy = dict(dict_letters_grid)
        for char in word:
            my_copy[char] -= 1
        for key in my_copy.keys():
            if my_copy[key] < 0:
                final_res = False
    print("no element is used twice: " + str(final_res))

def check_correctness(word, grid):
    result = False
    for i,row in enumerate(grid):
        for j,char in enumerate(list(row)):
            if char == word[0]:
                tmp = rec_check(word[1:], grid[:], i, j)
                result |= tmp

    return result

def rec_check(word, grid, x, y):
    if len(word) == 0:
        return True
    grid[x] = grid[x][0:y] + "0" + grid[x][y + 1:]
    result = False
    if x+1 <= 3 and grid[x+1][y] == word[0]:
        result |= rec_check(word[1:], [row[:] for row in grid], x+1, y)
    if x-1 >= 0 and grid[x-1][y] == word[0]:
        result |= rec_check(word[1:], [row[:] for row in grid], x-1, y)
    if y+1 <= 3 and grid[x][y+1] == word[0]:
        result |= rec_check(word[1:], [row[:] for row in grid], x, y+1)
    if y-1 >= 0 and grid[x][y-1] == word[0]:
        result |= rec_check(word[1:], [row[:] for row in grid], x, y-1)
    return result


'''
    if len(word) == 0:
        return True
    if x > 3 or x < 0 or y < 0 or y > 3:
        return False
    elif grid[x][y] == "0" or grid[x][y] != word[0]:
        return False
    grid[x] = grid[x][0:y] + "0" + grid[x][y+1:]
    return rec_check(word[1:], [row[:] for row in grid], x+1, y) or \
              rec_check(word[1:], [row[:] for row in grid], x, y+1) or \
              rec_check(word[1:], [row[:] for row in grid], x - 1, y) or \
              rec_check(word[1:], [row[:] for row in grid], x, y -1)
'''

if __name__ == '__main__':
    #print(ruzzles(["walk", "moon", "hate", "rope"]))
    #print(ruzzles(["abbr", "evia", "tion", "alba"]))
    #print(ruzzles(["abse", "imtn", "nded", "ssen"]))
    #print(ruzzles(["reca", "rwar", "aazp", "syon"]))
    #print(ruzzles(["abst", "oime", "uesl", "snsp"]))
    #print(ruzzles(["essx", "ndet", "sigh", "raen"]))
    #print(ruzzles(["poap", "lkjh", "aswe", "jhnh"]))

    test_properties(ruzzles(["walk", "moon", "hate", "rope"]), ["walk", "moon", "hate", "rope"])







