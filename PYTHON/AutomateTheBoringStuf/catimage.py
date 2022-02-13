from PIL import Image
import random
im = Image.new('RGBA', (1000,1000))
for x in range(1000):
    for y in range(1000):
        im.putpixel((x, y), (random.choice(range(256)), random.choice(range(256)), random.choice(range(256)), random.choice(range(256))))

im.save('imf3.png')

