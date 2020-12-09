import random
options =["왼쪽", "중앙", "오른쪽"]
choice=random.choice(options)

user=input("어디를 수비하시겠어요? (왼쪽, 중앙, 오른쪽) : ")

if choice==user:
    print("수비에 성공하셨습니다.")

else:
    print("수비에 실패하셨습니다.")
