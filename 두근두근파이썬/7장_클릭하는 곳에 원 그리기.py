import turtle
t=turtle.Turtle()
def circle(len):
    t.circle(len)

def drawit(x,y):
    t.up()
    t.goto(x,y)
    t.down()
    t.begin_fill()
    t.color("green")
    circle(50)
    t.end_fill()

s=turtle.Screen()
s.onscreenclick(drawit)
