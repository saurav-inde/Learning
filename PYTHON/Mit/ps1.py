import math
for candidate in range(1, 1000, 2):
    flag = 1
    for num in range(3,(math.sqrt(candidate) + 1)):
        if candidate % num == 0:
            flag = 0

    if flag == 1:
            print str(candidate), 'is prime'


# new versions of python suppurt Print(str(candidate), 'is prime')

            
