line = input()

count = 0
prev_char = None
flag = True
for char in line:
    if char == prev_char:
        count += 1
        if count >= 7:
            print('YES')
            flag = False
            break
        prev_char = char
    else:
        count = 1
        prev_char = char

if flag:
    print('NO')