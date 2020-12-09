import turtle
import random
t1=turtle.Turtle()
t2=turtle.Turtle()

t1.color("pink")
t1.shape("turtle")
t1.shapesize(5)
t1.pensize(5)

t2.color("blue")
t2.shape("turtle")
t2.shapesize(5)
t2.pensize(5)

t1.penup()
t1.goto(-300,0)
t1.pendown()
t2.penup()
t2.goto(-300,-100)
t2.pendown()

t1.speed(1)
t2.speed(2)

for i in range(100):
    d1=random.randint(1,60)
    t1.fd(d1)
    d2=random.randint(1,60)
    t2.fd(d2)
