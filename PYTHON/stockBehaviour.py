import random

def move(period):
    x  = 0
    for day in range(0, period):
        dx = random.choice([1, -1, -2, 2])
        x += dx
        print("_"* abs(x))

move(100)
