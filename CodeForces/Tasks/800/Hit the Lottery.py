#Allen has a lot of money, exactly 'n' dollars in his bank account. For security reasons, 
# he wants to withdraw the entire amount in cash. The denominations of dollar bills 
# are 1, 5, 10, 20, 100. What is the minimum number of bills Allen should receive 
# after withdrawing all the money?

n = int(input())
ans = n // 100 + (n % 100) // 20 + (n%100%20)//10 + (n%100%20%10) // 5 + (n%100%20%10%5)
print (ans)