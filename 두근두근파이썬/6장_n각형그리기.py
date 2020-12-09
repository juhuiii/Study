import turtle
t=turtle.Turtle()
t.shape="turtle"

s=turtle.textinput("", "몇각형을 원하시나요 ? : ")
s=int(s)
n=turtle.textinput("", "한 변의 길이 : ")
n=int(n)
for i in range(s):
    t.fd(n)
    t.lt(360/s)
