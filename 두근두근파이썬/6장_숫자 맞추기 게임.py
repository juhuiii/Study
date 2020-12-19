import random
tries=0
num=0
a=random.randint(1,100)
print("1부터 100 사이의 숫자를 맞추시오.")
while tries<5:
    num=int(input("숫자를 입력하시오 : "))
    tries=tries+1
    if num < a:
        print("더 높은 수를 입력하세요")
    elif num > a:
        print("더 낮은 수를 입력하세요!")
if num==a:
    print("축하합니다. 시도횟수 = ",tries)
else:
    print("정답은 ", a)

