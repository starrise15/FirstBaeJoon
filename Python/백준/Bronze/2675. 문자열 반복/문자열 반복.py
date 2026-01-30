c = int(input())
for i in range(c):
    num, ch = input().split()
    num = int(num)
    for j in ch:
        print(j * num, end="")
    print()
