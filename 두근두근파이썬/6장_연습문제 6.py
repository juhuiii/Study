import random
num=int(input("주사위를 몇 번 굴릴까요 ? : "))
for i in range(1,num+1):
    a=random.randint(1,7)
    b=random.randint(1,7)
    print("첫번째 주사위 = ", a, "두번째 주사위 = ", b)
