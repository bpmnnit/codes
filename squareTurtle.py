#!/usr/bin/python
# This file generates a square design
from turtle import *

setup (width=500, height=500, startx=0, starty=0)

tracer (True)

for i in range(200):
  forward(i)
  right(90.5)
done()
