n = int(input())

one = {}
two = {}
three = {}

def compare(num, vit, Dict):
    if vit not in Dict:
        Dict[vit] = num
    elif num < Dict[vit]:
        Dict[vit] = num
    return Dict

for i in range(n):
    IN = input().split()
    num = int(IN[0])
    vit = ''.join(sorted(IN[1]))

    len_vit = len(vit)

    if len_vit == 1:
        one = compare(num, vit, one)
    elif len_vit == 2:
        two = compare(num, vit, two)
    else: # len_vit == 3
        three = compare(num, vit, three)

Min = None

try:
    Min = one['A'] + one['B'] + one['C']
except: None

if Min == None and 'ABC' in three:
    Min = three['ABC']
elif 'ABC' in three:
    if three['ABC'] < Min:
        Min = three['ABC']


if 'A' in one and 'BC' in two:
    val = one['A'] + two['BC']
    if Min == None:
        Min = val
        minset = ['A', 'BC']
    elif val < Min:
        Min = val

if 'B' in one and 'AC' in two:
    val = one['B'] + two['AC']
    if Min == None:
        Min = val
        minset = ['B', 'AC']
    elif val < Min:
        Min = val

if 'C' in one and 'AB' in two:
    val = one['C'] + two['AB']
    if Min == None:
        Min = val
        minset = ['C', 'AB']
    elif val < Min:
        Min = val


KEYS = list(two.keys())
K = len(KEYS)

for i in range(K):
    for j in range(i+1, K):
        key_i = KEYS[i]
        key_j = KEYS[j]
        val = two[key_i] + two[key_j]
        if Min == None:
            Min = val
            minset = [key_i, key_j]
        elif val < Min:
            Min = val
            minset = [key_i, key_j]
if Min == None:
    print(-1)
else:
    print(Min)