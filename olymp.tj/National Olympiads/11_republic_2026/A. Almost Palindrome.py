# def solve():    
#     s = input()    
#     n = len(s)    
#     for i in range(n, 0, -1):        
#         pref = s[:i]        
#         if pref == pref[::-1]:            
#             print(n -i)            
#             return 
# solve()

def main():
    s = input()
    mid = len(s) // 2
    i = 0
    n = len(s) - 1
    while mid + i < len(s):
        if s[mid + i] == s[mid - i - 1]:
            i += 1
            n -= 2
        else:
            print(n)
            return
    print(n)
    return
if __name__ == "__main__":
    while True:
        main()        