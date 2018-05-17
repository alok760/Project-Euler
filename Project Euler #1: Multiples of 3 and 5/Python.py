for i in range(int(input())):
  n = int(input()) -1
  l1 = n - n%3
  l2 = n - n%5
  l3 = n - n%15

  s1 = ((l1)*(3+l1))//6
  s2 = ((l2)*(5+l2))//10
  s3 = ((l3)*(15+l3))//30

  print(s1+s2-s3)
