a=list(input())
start=0
end=len(a)-1
result=1
while start<end:
    if a[start]!=a[end]:
        result=0
        break
    start+=1
    end-=1
print(result)