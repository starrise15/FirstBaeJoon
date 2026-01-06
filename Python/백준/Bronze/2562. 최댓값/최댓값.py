arr=[]
for i in range(9):
    arr.append(int(input()))
max1=max(arr)
ind=arr.index(max1)+1
print(max1);
print(ind);