t,m=map(int,input().split())
c=int(input())
if m+c>=60:
    t1=(t+(m+c)//60)%24
    print(f"{t1} {(m+c)%60}")
else:
    print(f"{t} {m+c}")