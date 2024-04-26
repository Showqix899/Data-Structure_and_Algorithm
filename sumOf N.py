def sum(i,s):
    if(i<1):
        print(s)
        return
    else:
        sum(i-1,s+i)

sum(5,0)

def sum2(i):
    if(i<1):
        return 0
    else:
        return i+sum2(i-1)

print(sum2(3))