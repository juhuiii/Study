import turtle
import random
t=turtle.Turtle()
t.shape("turtle")

for i in range(30):
    len=random.randint(1,100)
    t.fd(len)
    ang=[90,180,270,360]
    ang=random.choice(ang)
    t.rt(ang)
