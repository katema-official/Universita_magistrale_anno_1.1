
if __name__ == '__main__':
    d = Drools(rules, ["bob", "joe", "fred", "tom"], ["red", "orange", "blue", "plaid"], list(range(1, 5)))
    d.eval()






