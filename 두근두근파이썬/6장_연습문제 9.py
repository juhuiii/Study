import random

import turtle
t=turtle.Turtle()
t.shape("turtle")

for i in range(10):
    x=random.randint(-200,200)
    y=random.randint(-200,200)
    r=random.randint(1,100)
    t.up()
    t.goto(x,y)
    t.down()
    t.circle(r)
