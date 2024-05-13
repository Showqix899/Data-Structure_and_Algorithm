
def fibo(n):
    if(n<=1):
        return n
    else:
        print(fibo(n-1)+fibo(n-2))

fibo(4)
