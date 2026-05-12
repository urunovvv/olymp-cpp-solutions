
def fah_to_celsium(n):
    return (n - 32) * 5 / 9

def kel_to_celsium(n):
    return n - 273.15

def ran_to_celsium(n):
    return (n - 491.67) * 5 / 9

def del_to_celsium(n):
    return 100 + n * 2 / 3

def new_to_celsium(n):
    return n * 100 / 33

def rea_to_celsium(n):
    return n * 5 / 4

def rom_to_celsium(n):
    return n * 100 / 24

def celsium_to_all(n):
    res = []
    res.append(n)
    res.append('degC')
    res.append(n * 9 / 5 + 32)
    res.append('degF')
    res.append(n + 273.15)
    res.append('K')
    res.append(n * 9 / 5 + 491.67)
    res.append('degR')
    res.append(100 - n * 3 / 2)
    res.append('degDe')
    res.append(n * 33 / 100)
    res.append('degN')
    res.append(n * 4 / 5)
    res.append('degRe')
    res.append(n * 24 / 100)
    res.append('degRo')
    return res

def main():
    type_t, n = map(str, input().split())
    n = float(n)
    type_t = type_t.lower()
    res = []
    if type_t == 'cel':
        res = celsium_to_all(n)
    elif type_t == 'fah':
        res = celsium_to_all(fah_to_celsium(n))
    elif type_t == 'kel':
        res = celsium_to_all(kel_to_celsium(n))
    elif type_t == 'ran':
        res = celsium_to_all(ran_to_celsium(n))
    elif type_t == 'del':
        res = celsium_to_all(del_to_celsium(n))
    elif type_t == 'new':
        res = celsium_to_all(new_to_celsium(n))
    elif type_t == 'rea':
        res = celsium_to_all(rea_to_celsium(n))
    else:
        res = celsium_to_all(rom_to_celsium(n))
    print(*res)

if __name__ == "__main__":
    while 1:
        main()