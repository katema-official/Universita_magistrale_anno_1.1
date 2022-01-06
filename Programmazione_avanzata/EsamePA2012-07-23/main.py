s0 = [[2,7,6,3,1,4,9,5,8],
        [8,5,4,9,6,2,7,1,3],
        [9,1,3,8,7,5,2,6,4],
        [4,6,8,1,2,7,3,9,5],
        [5,9,7,4,3,8,6,2,1],
        [1,3,2,5,9,6,4,8,7],
        [3,2,5,7,8,9,1,4,6],
        [6,4,1,2,5,3,8,7,9],
        [7,8,9,6,4,1,5,3,2]]
s1 = [[2,7,6,3,1,4,9,5,8],
        [8,5,4,9,6,2,7,1,3],
        [9,1,3,8,7,5,2,6,4],
        [4,6,8,1,2,7,3,9,5],
        [5,9,7,4,3,8,6,2,1],
        [3,2,5,7,8,9,1,4,6],
        [1,3,2,5,9,6,4,8,7],
        [6,4,1,2,5,3,8,7,9],
        [7,8,9,6,4,1,5,3,2]]
s2 = [[2,7,6,3,1,4,9,5,8],
        [8,5,4,9,6,2,7,1,3],
        [9,1,3,8,7,5,2,6,4],
        [3,2,5,7,8,9,1,4,6],
        [6,4,1,2,5,3,8,7,9],
        [7,8,9,6,4,1,5,3,2],
        [3,2,5,7,8,9,1,4,6],
        [6,4,1,2,5,3,8,7,9],
        [7,8,9,6,4,1,5,3,2]]
s3 = [[2,7,6,9,5,8,9,5,8],
        [8,5,4,7,1,3,7,1,3],
        [9,1,3,2,6,4,2,6,4],
        [4,6,8,3,9,5,3,9,5],
        [5,9,7,6,2,1,6,2,1],
        [1,3,2,4,8,7,4,8,7],
        [3,2,5,1,4,6,1,4,6],
        [6,4,1,8,7,9,8,7,9],
        [7,8,9,5,3,2,5,3,2]]

def check_rows(sudoku):
    return any([True if elem in row[row.index(elem)+1:] else False for row in sudoku for elem in row])

def check_subgrid(sudoku, x0, y0, x1, y1):
    return check_rows([[sudoku[i][j] for i in range(x0, x1) for j in range(y0, y1)]])

#di Davide
def linearize(sudoku):
    if sudoku == []:
        return []
    else:
        return sudoku[0] + linearize(sudoku[1:])

def is_sudoku(sudoku):
    #primo controllo: tutte le righe contengono elementi diversi
    #secondo controllo: tutte le colonne contengono elementi diversi
    #per farlo, invertiamo la matrice, e facciamo il controllo di prima
    #terzo controllo: tutte le sotto-grid contengono numeri diversi
    return not(check_rows(sudoku) or check_rows([[row[i] for row in sudoku] for i in range(9)]) \
               or any([check_subgrid(sudoku, i, j, i+3, j+3) for i in range(0,9,3) for j in range(0,9,3)]))


if __name__ == "__main__":
    print("s0 :-", is_sudoku(s0))
    print("s1 :-", is_sudoku(s1))
    print("s2 :-", is_sudoku(s2))
    print("s3 :-", is_sudoku(s3))