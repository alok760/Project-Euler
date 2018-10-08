def power():
    result = 2**1000
    arr = []
    for i in range(0,len(str(result))):
        arr.append(str(result)[i])
    arr = list(map(int,arr))
    return sum(arr)

print(power())
