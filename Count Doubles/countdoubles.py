n, m = map(int, input().split())
numbers = input().split()
count = 0

for i in range(0, n - m + 1):
    even_count = 0
    nums = numbers[i:i+m]
    for num in nums:
        if int(num) % 2 == 0:
            even_count += 1
            
    if even_count > 1:
        count += 1
        
print(count)