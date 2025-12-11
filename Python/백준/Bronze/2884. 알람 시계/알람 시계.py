t,m=map(int,input().split())
if m>=45:
    print(f"{t} {m-45}")
else:
    t-=1
    if t<0:
        print(f"{t+24} {m+15}")
    else:
        print(f"{t} {m+15}")