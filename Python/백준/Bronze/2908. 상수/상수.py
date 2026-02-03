a,b=input().split()
ca=int(a[::-1])
cb=int(b[::-1])
if ca<cb:
    print(cb)
else:
    print(ca)