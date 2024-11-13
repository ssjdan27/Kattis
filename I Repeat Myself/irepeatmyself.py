def find_shortest_pattern(s):
    n = len(s)
    for pattern_len in range(1, n + 1):
        pattern = s[:pattern_len]
        needed_repetitions = (n + pattern_len - 1) // pattern_len
        full_string = pattern * needed_repetitions
        if s == full_string[:n]:
            return pattern_len
    
    return n

n = int(input())
for i in range(n):
    phrase = input()
    print(find_shortest_pattern(phrase))