from PIL import Image

from test import chakra
img =  Image.new("RGB", (300, 450))

for i in range(300):
    for j in range(450):
        if i < 100:
            img.putpixel((i, j), (255, 153, 51))
        elif i < 200:
            img.putpixel((i, j), (255, 255, 255))
        else:
            img.putpixel((i, j), (19, 136, 8))

        if chakra(i,j):
            img.putpixel((i, j), (0,0,128))     

img.save("tricolor.png")
