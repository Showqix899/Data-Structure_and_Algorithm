
def backstep(i,n):
    if(i<1):
        return
    else:
        backstep(i-1,n)
        print(i)
backstep(5,5)
