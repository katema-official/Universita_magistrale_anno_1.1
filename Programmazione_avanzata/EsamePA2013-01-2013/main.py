#import sys
#x=15000
#sys.setrecursionlimit(x)

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

def check_columns(grid):
    for i in range(4):
        my_l = [el[i] for el in grid]
        #se c'è una colonna con duplicati, false, non va bene come soluzione
        if len([el for el in range(1,5) if el not in my_l]) > 0:    #si poteva fare col set
            return False
    return True

def check_sub_square(grid, x, y):
    list_of_digits = [grid[i][j] for i in range(x, x+2) for j in range(y, y+2)] #cazzola approves
    #for i in range(x, x+2):
    #    for j in range(y, y+2):
    #        list_of_digits.append([i][j])
    if len(set(list_of_digits)) == 4: return True
    return False

def check_squares(grid):
    return check_sub_square(grid, 0, 0) and check_sub_square(grid, 0, 2) \
           and check_sub_square(grid, 2, 0) and check_sub_square(grid, 2, 2)

def check_sudoku(grid):
    #controllo le righe... no perché tanto già lo fa il generatore
    return check_columns(grid) and check_squares(grid)

#4x4
def sudoku():
    def rec2(grid):
        if len(grid) >= 4:
            if check_sudoku(grid):
                yield grid
        else:
            gen = perm_four()
            for row in gen:
                grid.append(row)
                for x in rec2(grid[:]):
                    yield x
                grid = grid[:-1]
    return rec2([])

if __name__ == '__main__':
    S = sudoku()
    for i in range(1, 101):
       print("S[{:3}] :- {}".format(i, next(S)))
