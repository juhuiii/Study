contacts={}
while True:
    name=input("(입력모드)이름을 입력하시오: ")
    if not name:
        break;
    tel=input("전화번호를 입력하시오: ")
    contacts[name]=tel
while True:
    name2=input("(검색모드)이름을 입력하시오 : ")
    print(name2,"의 전화번호는", contacts[name2],"입니다.")
    if not name2:
        break;


