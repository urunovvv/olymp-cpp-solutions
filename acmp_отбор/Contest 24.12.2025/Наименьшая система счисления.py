s = input()
ans = 0
for i in s:
    if not i.isupper() and not i.isdigit():
        b = False
        print ('No\n')
    ans = max(ans, chr(i))
if not b:
    print (ans) 
