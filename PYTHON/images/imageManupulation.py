
import random
from PIL import Image
import test

imgg = Image.open('image.png')
img = imgg.convert('RGB')
height, width = img.size

for x in range(width):
    for y in range(height):
        temp_pixx = img.getpixel((y, x))
        temp_list = list(temp_pixx)
        # for i in range(3):
        if temp_list[2] > 200:
            temp_list[0] = int(temp_list[0]/(random.choice(range(1,10))))
            temp_list[1] = int(temp_list[1]/(random.choice(range(1,10))))
            temp_list[2] = int(temp_list[2]/(random.choice(range(1,10))))
            

        if temp_list[2] < 125:
            temp_list[0] = int(temp_list[0]*(random.choice(range(1,10))))
            temp_list[1] = int(temp_list[1]*(random.choice(range(1,10))))
            temp_list[2] = int(temp_list[2]*(random.choice(range(1,10))))


        img.putpixel((y, x),  tuple(temp_list))

img.save('aci.png')
