import random
import sympy
from math import *
from PIL import Image


def chakra(x, y):
    for theta in range(0,15, 360):
        if (y-500) - (x-500 )* tan((theta*pi)/180) < 0.1 and (y-500) - (x-500 )* tan((theta*pi)/180) > -0.1:
            return 1
    return 0        



img_size = 1000
img = Image.new("RGB", (img_size, img_size))
for i in range(1000):
    for j in range(1000):
        if chakra(i, j):
            img.putpixel((i,j), (0, 122, 204))
        else:
            img.putpixel((i,j), (255,255,255))    



      
img.save("mixcolor.png")      

