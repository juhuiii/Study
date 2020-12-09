import turtle
t=turtle.Turtle()
t.shape("turtle")

def draw_line():
    turtle.fd(100)
    turtle.backward(100)
    turtle.lt(30)

for i in range(12):
    draw_line()
