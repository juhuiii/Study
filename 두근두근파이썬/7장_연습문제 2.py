import turtle
t=turtle.Turtle()
t.shape("turtle")

def hexagon():
    for i in range(6):
        t.fd(50)
        t.lt(360/6)

for i in range(6):
    t.fd(50)
    t.rt(60)
    hexagon()
