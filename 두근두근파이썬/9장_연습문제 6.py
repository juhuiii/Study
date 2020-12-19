import random
import turtle
t=turtle.Turtle()
t.shape("turtle")
s=turtle.Screen();
s.bgcolor("black");

color=["red","blue","brown","yellow","green","purple", "white"]

length=0
sides=0
x=0
y=0

def draw_star(color,length,x,y):
    t.penup()
    t.goto(x,y)
    t.pendown()
    t.color(c)
    t.begin_fill()
    for i in range(5):
        t.fd(length)
        t.lt(144)
    t.end_fill()
    
for c in color:
    x=random.randint(-100,100)
    y=random.randint(-100,100)
    length=random.randint(10,50)
    draw_star(color,length,x,y)
