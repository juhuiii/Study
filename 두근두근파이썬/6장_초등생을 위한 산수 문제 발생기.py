import random
while True:
    x=random.randint(1,100)
    y=random.randint(1,100)
    how=random.choice(["+","-"])
    if how=="+":
        print(x,how,y,"=",end=" ")
        sum=x+y
        answer=int(input())
        if sum==answer:
            print("잘했어요!!")
        else :
            print("다음번에는 잘할 수 있죠?")
    else:
        print(x,how,y,"=",end=" ")
        minus=x-y
        answer=int(input())
        if minus==answer:
            print("잘했어요!!")
        else :
            print("다음번에는 잘할 수 있죠?")



