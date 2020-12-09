num=int(input("복권 번호를 입력하시오 (0에서 99사이) : "))
num1=num//10
num2=num%10

import random
number=random.randint(0,99)
number1=number//10
number2=number%10

if num==number:
    print("당첨번호는 " + str(number) + "입니다.")
    print("상금은 100만원입니다.")
elif (num1==number1) or (num2==number2)﻿ or (num1==number2) or (num2==number1):
    print("당첨번호는 " + str(number) + "입니다.")
    print("상금은 50만원입니다.")
else :
    print("당첨번호는 " + str(number) + "입니다.")
    print("상금은 0원입니다.")
