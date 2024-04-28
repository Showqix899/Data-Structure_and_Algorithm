
li=[1,2,3,4,5,6]
length=len(li)
def nums(i,n):
     if(i==n):
         print(li)
         return 0
     else:
         temp=li[i]
         li[i]=li[n-1]
         li[n-1]=temp
         nums(i+1,n-1)
nums(0,length)



