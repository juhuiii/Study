import random 
a=random.randint(1,10)
b=random.randint(1,10)
mul=a*b
while True:
    answer=int(input(str(a)+"*"+str(b)+"는 "))
    if mul==answer:
        print("맞았습니다.")
        break;
