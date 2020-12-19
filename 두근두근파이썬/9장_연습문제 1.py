list=[]
sum=0
for i in range(5):
    num=int(input("정수를 입력하세요 : "))
    list.append(num)
for j in range(5):
    sum=sum+list[j]
print(sum/len(list))
