# M2LAB2 - graphics
# Luis Rivera Gonzalez
# 2/5/2025
# Goal: Learn some simple graphics tool

from turtle import *

screen = Screen()
screen.bgcolor("black")

t = Turtle()
t.speed(0)
# Drawing Head
t.pencolor("yellow")
t.pensize(5)
t.penup()
t.goto(10,-100)
t.pendown()
t.fillcolor("yellow")
t.begin_fill()
t.circle(200)
t.end_fill()
t.penup()
t.pencolor("black")

#Drawing right eye
t.fillcolor("white")
t.begin_fill()
t.goto(100, 150)
t.pendown()
t.circle(50)
t.end_fill()
t.penup()


#Drawing left eye
t.fillcolor("white")
t.begin_fill()
t.goto(-80, 150)
t.pendown()
t.circle(50)
t.end_fill()
t.penup()

#Drawing mouth
t.fillcolor("white")
t.begin_fill()
t.goto(-80, 50)
t.pendown()
t.right(90)
t.circle(100,180)
t.right(-90)
t.forward(200)
t.end_fill()
t.penup()

#Drawing left pupil
t.goto(-80, 220)
t.pendown()
t.pencolor("black")
t.fillcolor("brown")
t.begin_fill()
t.circle(20)
t.end_fill()
t.penup()

#Drawing right pupil
t.goto(100, 220)
t.pendown()
t.pencolor("black")
t.fillcolor("brown")
t.begin_fill()
t.circle(20)
t.end_fill()
t.penup()

#Drawing teeth
t.goto(-60, 50)
t.right(-90)
t.pendown()
t.forward(60)
t.goto(-30, 50)
t.forward(80)
t.goto(0, 50)
t.forward(100)
t.goto(30, 50)
t.forward(100)
t.goto(60, 50)
t.forward(90)
t.goto(80, 50)
t.forward(50)
t.goto(100, 50)
t.forward(30)
t.goto(120, 50)
