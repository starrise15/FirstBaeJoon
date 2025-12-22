total=int(input())
amount=int(input())
sum1=0
for i in range(1,amount+1):
    prize,amount2=map(int,input().split())
    sum1+=prize*amount2
if total==sum1:
    print("Yes")
else:
    print("No")