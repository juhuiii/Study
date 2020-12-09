import turtle
t=turtle.Turtle()
t.shape("turtle")
s=turtle.Screen()
s.bgcolor('skyblue');t.color('black','white')

def draw_snowman(x,y):
    t.up()
    t.goto(x,y+100)
    t.down()
    t.begin_fill()
    t.circle(30)
    t.end_fill()
    
    t.up()
    t.goto(x,y+70)
    t.down()
    t.lt(25)
    t.fd(70)
    t.fd(-70)
    t.lt(110)
    t.fd(80)
    t.fd(-80)
    t.seth(0) # t.seth(n) = 거북이가 특정 각도를 바라보도록 회전
    t.begin_fill()
    t.circle(25)
    t.end_fill()
    
    t.up()
    t.goto(x,y)
    t.down()
    t.begin_fill()
    t.circle(40)
    t.end_fill()

for i in range(3):
    draw_snowman(200*i-200,0)
