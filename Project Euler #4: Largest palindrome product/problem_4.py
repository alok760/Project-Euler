def palindrome():
    y = 999
    while(y<1000):
        for x in range(900,999):
            pal = x*y
            if(str(pal) == str(pal)[::-1]):
                print(x," ",y)
                return pal
        y = y-1

print(palindrome())
