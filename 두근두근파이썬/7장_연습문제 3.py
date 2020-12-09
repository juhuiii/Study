import turtle
t=turtle.Turtle()
t.shape("turtle")

def func():
    for i in range(150):
        t.goto(i,(i**2+1)*0.01)

t.fd(300)
t.fd(-300)
t.lt(90)
t.fd(300)
t.fd(-300)
t.rt(90)
func()
