amount,maximum=map(int, input().split())
arr=list(map(int, input().split()))
for i in arr:
    if i<maximum:
        print(i, end=" ")