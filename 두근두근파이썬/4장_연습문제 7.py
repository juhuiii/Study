color_list = []

color=input("색상 #1을 입력하시오 : ")
color_list.append(color)
color=input("색상 #2을 입력하시오 : ")
color_list.append(color)
color=input("색상 #3을 입력하시오 : ")
color_list.append(color)

import turtle
t=turtle.Turtle()
t.shape("turtle")

t.fillcolor(color_list[0])
t.begin_fill()
t.circle(50)
t.end_fill()
t.up()
t.fd(100)
t.down()
t.fillcolor(color_list[1])
t.begin_fill()
t.circle(50)
t.end_fill()
t.up()
t.fd(100)
t.down()
t.fillcolor(color_list[2])
t.begin_fill()
t.circle(50)
t.end_fill()
