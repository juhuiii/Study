number=int(input("정수를 입력하시오 : "))
n1=((number//10)//10)//10
n2=((number//10)//10)%10
n3=(number//10)%10
n4=number%10
print("자리수의 합 : ", n1+n2+n3+n4)
