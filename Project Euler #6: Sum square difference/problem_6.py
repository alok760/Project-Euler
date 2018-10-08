def difference():
    sumsquare = 0
    squaresum = 0
    for i in range(1,101):
        squaresum = squaresum + i
        sumsquare = sumsquare + i*i

    squaresum = squaresum*squaresum
    return (squaresum - sumsquare)

print(difference())
