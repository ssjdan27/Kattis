letters = input()
center_letter = letters[0]
n = int(input())

for i in range(n):
    invalid_letter = False
    word = input()
    if center_letter not in word:
        continue
    
    count = 0
    for letter in word:
        if letter in letters:
            count += 1
        else:
            invalid_letter = True
            break
            
    if not invalid_letter and count > 3:
            print(word)