n=int(input())
m=0
arr=list(map(int,input().split()))
want=int(input())
for i in range(0,n):
    if arr[i]==want:
        m+=1
print(m)