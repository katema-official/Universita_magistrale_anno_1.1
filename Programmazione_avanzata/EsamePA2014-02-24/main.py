operators = ["+", "-", "*", "/"]
op_dict = {"+" : lambda x, y: int(x) + int(y),
           "-" : lambda x, y: int(x) - int(y),
           "*" : lambda x, y: int(x) * int(y),
           "/" : lambda x, y: int(x) // int(y)}

def print_reduction(c):
    e = []
    digits = list("0123456789")
    expr_as_list = c.expr
    for elem in expr_as_list:
        if elem in digits:
            e.append((elem, "B"))
        else:
            e.append((elem, "N"))
    while len(e) > 0:
        e = produce_new_expr_as_list(e)

#1) stampa la riduzione corrente
#2) restituisce la nuova expr_as_list
def produce_new_expr_as_list(expr_as_list):
    stack = []
    expr_as_list_return = []
    while len(expr_as_list) > 0:
        popped = expr_as_list[-1]
        if popped[0] in op_dict.keys():
            operand1 = stack.pop()
            operand2 = stack.pop()
            if operand1[1] == "B" and operand2[1] == "B":
                function = op_dict[popped[0]]
                res = function(operand1[0], operand2[0])
                expr_as_list_return.insert(0, (str(res), "B"))
            elif operand1[1] == "C" and operand2[1] == "C":
                expr_as_list_return.insert(0, popped)
            else:
                true_operand = None
                if operand1[1] == "B":
                    true_operand = operand1
                else:
                    true_operand = operand2
                expr_as_list_return.insert(0, true_operand)
                expr_as_list_return.insert(0, popped)
            stack.append(("(" + operand1[0] + popped[0] + operand2[0] + ")", "C"))
        else:
            stack.append(popped)
        expr_as_list.pop()
    print(stack[0][0])
    return expr_as_list_return

class calculator:
    def __init__(self, expr):
        self.expr = list(expr)
    def __str__(self):
        return "".join(self.expr)


if __name__ == '__main__':
    expressions = ["+34", "+3-15", "*+34-23", "+7++34+23",
                   "*+*34-34/6-35", "/+-81*45*/93/52", "*+/12/14-2/32", "+2*-53/63"]
    #print_reduction(calculator("+7++34+23"))
    [print_reduction(calculator(expr)) for expr in expressions]
