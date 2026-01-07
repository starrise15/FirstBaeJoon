a, b = map(int, input().split())
arr = [0] * a
for q in range(b):
    i, j, k = map(int, input().split())
    for w in range(i - 1, j):
        arr[w] = k
for r in range(a):
    print(arr[r], end=" ")