x1=int(input("큰 원의 중심좌표 x1 : "))
y1=int(input("큰 원의 중심좌표 y1 : "))
r1=int(input("큰 원의 반지름 : "))
x2=int(input("작은 원의 중심좌표 x2 : "))
y2=int(input("작은 원의 중심좌표 y2 : "))
r2=int(input("작은 원의 반지름 : "))

import turtle
t=turtle.Turtle()
t.shape("turtle")
t.up()
t.goto(x1, y1-r1)
t.down()
t.circle(r1)
t.up()
t.goto(x2, y2-r2)
t.down()
t.circle(r2)

distance = ((x1-x2)**2 + (y1-y2)**2)**0.5
if distance<(r1-r2):
    t.write("작은 원이 큰 원의 내부에 있습니다.")
elif distance==(r1+r2) or distance==(r1-r2):
    t.write("작은 원과 큰 원이 겹쳐있습니다.")
else:
    t.write("작은 원이 큰 원의 내부에 있지 않습니다.")
