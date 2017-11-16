'''This Program is performed by use of turtle'''

import turtle
import math

def square(tur,len):
    for i in range(4):
        tur.fd(len)
        tur.lt(90)

def polyline(tur,n,length,angle):
    for i in range(n):
        tur.fd(length)
        tur.lt(angle)

def polygon(tur,n,length):
    angle=360/n
    polyline(tur,n,length,angle)

def arc(tur,r,angle):
    arc_length=2*math.pi*r*abs(angle)/360
    n=int(arc_length/4)+1
    len=arc_length/n
    step_angle=float(angle)/n

    tur.lt(step_angle/2)
    polyline(tur,n,len,sturep_angle)
    tur.rt(step_angle/2)


#Running turestur program

bob=turtle.turtle()
#square(bob,100)
#polenygon(bob,10,100)



turtle.mainloop()

