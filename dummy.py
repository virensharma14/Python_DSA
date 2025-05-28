def print2(n):
  for i in (range(n)):
    for j in range(i):
      print(" ",end=" ")
    for k in range(2*n-(2*i+1)):
      print("*",end=" ")
    for l in range(i):
      print(" ",end=" ")
    print()
def print1(n):
  for i in range(n):
    for j in range(n-i+1):
      print(" ",end=" ")
    for k in range(2*i+1):
      print("*",end=" ")
    for l in range(n-i+1):
          print(" ",end=" ")
    print()

print1(5)

print2(5)
