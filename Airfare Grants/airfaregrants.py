n = int(input())
smallest = float('inf')
largest, cost = 0,0
for i in range(n):
    value = int(input())
    smallest = min(smallest, value)
    largest = max(largest, value)

reimbursed = largest // 2
cost = smallest - reimbursed

if cost < 0:
    print(0)
else:
    print(cost)