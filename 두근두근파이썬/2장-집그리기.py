import turtle
t=turtle.Turtle()
t.shape("turtle")

size=int(input("집의 크기는 얼마로 할까요? "))

t.fd(size)
t.rt(90)
t.fd(size)
t.rt(90)
t.fd(size)
t.rt(90)
t.fd(size)

t.rt(30)
t.fd(size)
t.rt(120)
t.fd(size)
