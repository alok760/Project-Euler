def numberOfPath(m):
    count = [[0 for x in range(m)] for y in range(m)]

    for i in range(m):
        count[i][0] = 1
        count[0][i] = 1

    for i in range(1,m):
        for j in range(1,m):
            count[i][j] = count[i-1][j] + count[i][j-1]

    return count[m-1][m-1]

print(numberOfPath(21))
