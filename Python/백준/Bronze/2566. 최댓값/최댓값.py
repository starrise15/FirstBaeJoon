array=[list(map(int,input().split()))for i in range(9)]
maxnum=array[0][0]
maxx=0
maxy=0
for j in range(9):
    for k in range(9):
        if maxnum<array[j][k]:
            maxnum=array[j][k]
            maxx=j
            maxy=k
print(maxnum)
print(f"{maxx+1} {maxy+1}")