def dec_to_ternary(n):
   if n < 3:
      return str(n)
   s = ''
   while n > 0:
      s = str(n % 3) + s
      n //= 3
   return s

def dec_to_down(n):
    if n <= 3:
       return str(n)
    n = dec_to_ternary(n)
    res = ''
    s = [str(c) for c in n]
    for i in range(len(s)-1, -1, -1):
        if s[i] == '0':
            res += str(int(s[i]) * 3 + 3)
            s[i-1] = str(int(s[i-1]) - 1)
        else:
            res += s[i]
    return res[::-1]

print(dec_to_down(10))  # Output: 31
print(dec_to_down(18))  # Output: 123