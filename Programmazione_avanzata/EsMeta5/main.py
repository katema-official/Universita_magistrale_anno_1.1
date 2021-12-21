#Pseudo-testo dell'esercizio: scrivere pretty(f, n) che, data una lambda
#(f) e il numero dei suoi argomenti (n), printi la tabella di verità della
#lambda (tutte le lambda sono infatti funzioni booleane, pertanto tutti gli
#argomenti possono assumere come valore solo 1 e 0, cioè True e False)



'''def pretty(lamb, arg_count):
   for i in range(2**arg_count):
      pass


#n è la lunghezza della stringa da permutare
def rec(n, acc):
   if n == 1:
      for i in range(2):
         yield acc + str(i)
   else:
      for i in range(2):
          rec(n-1, acc + str(i))


def recc(n, max):
   if n == max:
      for i in range(2):
         x = [i]+recc(n-1,max)
         yield x
   else:
      for i in range(2):
         yield [i]


if __name__ == '__main__':
   f0 = lambda x: 1-x
   f1 = lambda x, y: x&y
   f2 = lambda x, y: x|y
   f3 = lambda x, y, z: (x&y)|(x&z)
   f4 = lambda x1, x2, x3, x4, x5, x6, x7: f1(f0(x1), x2) | (f2(x3, f0(x4))&x5) | f3(x5, x6, x7)

   r = recc(3, 3)
   print(next(r))
   print(next(r))


'''

#ignorare questa funzione, non è relativa all'esercizio
def recc(n, max):
   if n == max:
      for i in range(2):
         x = [i]+recc(n-1,max)
         yield x
   else:
      for i in range(2):
         yield [i]

def tuples(n):
   if n == 1:
      yield[0]
      yield[1]
   else:
      for i in {0, 1}:
         for tmp in tuples(n-1):
            yield [i] + tmp

def pretty(f, n):
   for row in tuples(n):
      print("{0} :- {1}".format(row, f(*row)))

if __name__ == "__main__":
   f0 = lambda x: 1 - x
   f1 = lambda x, y: x & y
   f2 = lambda x, y: x | y
   f3 = lambda x, y, z: (x & y) | (x & z)
   f4 = lambda x1, x2, x3, x4, x5, x6, x7: f1(f0(x1), x2) | (f2(x3, f0(x4)) & x5) | f3(x5, x6, x7)
   pretty(f0, 1)
   pretty(f1, 2)
   pretty(f4, 7)
   #r = recc(3, 3)
   #print(next(r), next(r))
