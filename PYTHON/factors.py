import math 
num = int(input('Enter number: '))

# find factor of number
print('The factors of', num, 'are:')
rootnum =(int)( math.sqrt(num) + 1)
for i in range(1, (rootnum), 2):
    if(num % i) == 0:
        print(i, end=' ')
