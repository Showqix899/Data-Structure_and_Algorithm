
def recur(n):
    if n==0:
        return
    else:
        print("showqi")
        recur(n-1)


recur(5)
i=1
def recur2(x):
    if x==5+1:
        return
    else:
        print(x)
        
        recur2(x+1)


recur2(1)