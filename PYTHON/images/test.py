import random
import sympy
from math import *
from PIL import Image


def chakra(x, y):
    for theta in range(0, 360, 15):
        
        if (y-225)**2 + (x-150 )**2 -2500 < 50 and (y-150)**2 + (x-150 )**2 -2500 > -50:
            return 1
        # print(theta)
        if (((y-225) - (x-150 )* tan((theta*pi)/180) < 0.81 and (y-225) - (x-150 )* tan((theta*pi)/180) > -.81) or( x > 149 and x < 151)) and (y-225)**2 + (x-150 )**2 -2500 < 0:
            return 1
    return 0        



# img_size = 1000
# img = Image.new("RGB", (img_size, img_size))
# for i in range(1000):
#     for j in range(1000):
#         if chakra(i, j):
#             img.putpixel((i,j), (0, 122, 204))
#         else:
#             img.putpixel((i,j), (255,255,255))    



      
# img.save("lines.png")   