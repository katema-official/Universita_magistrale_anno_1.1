dict = {}
ret = []

cp = {"nord":{"left": ("ovest", lambda x, y: (x-1, y)), "right": ("est", lambda x, y: (x+1, y)), "straight": ("nord", lambda x, y: (x, y+1))},
        "sud":{"left": ("est", lambda x, y: (x+1, y)), "right": ("ovest", lambda x, y: (x-1, y)), "straight": ("sud", lambda x, y: (x, y-1))},
        "ovest":{"left": ("sud", lambda x, y: (x, y-1)), "right": ("nord", lambda x, y: (x, y+1)), "straight": ("ovest", lambda x, y: (x-1, y))},
        "est":{"left": ("nord", lambda x, y: (x, y+1)), "right": ("sud", lambda x, y: (x, y-1)), "straight": ("est", lambda x, y: (x+1, y))},
        }

def gen_primes():
    r = []
    for i in range(3, 10002):
        if is_prime(i):
            r.append(i)
    return r

def is_prime(n):
    for j in range(2, int(n**0.5)+1):
        if n % j == 0:
            return False
    return True

primes = gen_primes()

def crossing():
    rec(0, 0, 3, "nord")
    ret = [v for _,v in dict.items() if len(v) >= 2]
    ret = sorted(ret, key=lambda x: x[0])
    return ret

def rec(x,y,n, direction):
    #print("valore corrente: " + str(n))
    if n > 10002:
        return

    if (x,y) in dict:
        dict[(x,y)].append(n)
    else:
        dict[(x,y)] = [n]

    #in base al numero n, decidiamo dove andare: su, sx o dx
    if n in gen_primes() and (n - 1) % 6 == 0:        #6k + 1, sinistra
        new_direction_coordinates = cp[direction]["left"]         #tupla (nuova direzione, funzione nuove coordinate)
    elif n in gen_primes() and (n + 1) % 6 == 0:      #6k - 1, destra
        new_direction_coordinates = cp[direction]["right"]
    else:                       #vado dritto per la direzione corrente
        new_direction_coordinates = cp[direction]["straight"]
    newx, newy = new_direction_coordinates[1](x, y)         #le coordinate del nuovo numero
    rec(newx, newy, n + 2, new_direction_coordinates[0])


if __name__ == '__main__':

    print(len(gen_primes()))

    if __name__ == "__main__":
        for i in crossing():
            print("### :- ", i)