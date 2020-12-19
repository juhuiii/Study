import random
import turtle
t=turtle.Turtle()
t.shape("turtle")
color=["red","blue","brown","yellow","green","purple"]

length=0
sides=0
x=0
y=0

def draw_shape(t,c,length,sides,x,y):
    t.penup()
    t.goto(x,y)
    t.pendown()
    t.color(c)
    t.begin_fill()
    for i in range(sides):
        t.fd(length)
        t.lt(360/sides)
    t.end_fill()
for c in color:
    sides=random.randint(3,8)
    x=random.randint(-100,100)
    y=random.randint(-100,100)
    length=random.randint(10,50)
    draw_shape(t,c,length,sides,x,y)
