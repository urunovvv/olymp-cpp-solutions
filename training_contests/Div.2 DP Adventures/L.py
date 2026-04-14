def IsPaslindrome(s):
    return s == s[::-1]
s = input()
palindromes = []
for i in range(len(s)-2):
    for j in range(i + 2, len(s)):
        if IsPaslindrome(s[i:j]):
            palindromes.append(s[i:j])
id = palindromes.index(max(palindromes, key=len))
# palindromes = palindromes[id:]
print(palindromes[id])