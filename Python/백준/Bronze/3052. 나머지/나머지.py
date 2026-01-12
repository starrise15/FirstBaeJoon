arr=[0]*43
for i in range(10):
    a=int(input())
    sum1=a%42
    arr[sum1]=1
sum2=0
for i in range(43):
    if arr[i]==1:
        sum2+=1
print(sum2)