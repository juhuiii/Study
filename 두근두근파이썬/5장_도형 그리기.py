import turtle
t=turtle.Turtle()
t.shape("turtle")

s=turtle.textinput("", "도형을 입력하시오 : ")

if s=="사각형":
    s=turtle.textinput("", "가로를 입력하시오 : ")
    a=int(s)
    s=turtle.textinput("", "세로를 입력하시오 : ")
    b=int(s)

    t.fd(a)
    t.lt(90)
    t.fd(b)
    t.lt(90)
    t.fd(a)
    t.lt(90)
    t.fd(b)
elif s=="삼각형":
    s=turtle.textinput("", "한 변의 길이를 입력하시오 : ")
    a=int(s)

    t.fd(a)
    t.lt(120)
    t.fd(a)
    t.lt(120)
    t.fd(a)

elif s=="원":
    s=turtle.textinput("", "반지름을 입력하시오 : ")
    a=int(s)

    t.circle(a)
