import random
x=random.randint(1, 100)
y=random.randint(1, 100)
a=x-y
b=int(input(str(x) + "-" + str(y) + "= "))

if a==b :
    print("정답입니다.")
else :
    print("오답입니다.")
