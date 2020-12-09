x=[]
y=[]

x1=int(input("x1 : "))
x.append(x1)
y1=int(input("y1 : "))
y.append(y1)
x2=int(input("x2 : "))
x.append(x2)
y2=int(input("y2 : "))
y.append(y2)
x3=int(input("x3 : "))
x.append(x3)
y3=int(input("y3 : "))
y.append(y3)

import turtle
t=turtle.Turtle()
t.shape("turtle")
t.up()
t.goto(x[0], y[0])
t.down()
t.goto(x[1], y[1])
t.goto(x[2], y[2])
