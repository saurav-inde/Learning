import random

def increment_chooser(n):
    
    x, y  = 0 ,0
    
    while(n):
        n -= 1
        dx, dy = random.choice([(1,0),(0,1),(-1,0),(0,-1)])
        x += dx
        
        y += dy
        
    return (x, y)


    
#print(increment_chooser(10))

i = 1000
while(i):
    i -= 1
    final_position = increment_chooser(100)
  
    final_distance = abs(final_position[0]) + abs(final_position[1])

    print(final_distance)
