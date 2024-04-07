a=0
def recursion(x):
    if x==4:
        return
    else:
        print(x)
    x=x+1
    recursion(x)

recursion(a)