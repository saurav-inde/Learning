from typing import Counter

counters = [0, 0, 0, 0, 0, 0, 0, 0, 0,0]
distances = [0, 0, 0, 0, 0, 0, 0, 0, 0,0]


def digit_master(dig, ind):
#    indexes = [0, 0, 0, 0, 0, 0, 0, 0, 0,0]
    counters[dig] += 1
    distances[dig] = ind
    return 0


user_num = input("Enter digits: ")
iter = 0
for dig in user_num:
    if dig == ' ':
        continue
    digit_master(int(dig), iter)
    iter += 1

total_iter = 0
print('\n\n\n\n      Digits of _/5 analysis:)\n\n')
for x in range(0, 10):
    print('instances of ', str(x), ' :', str(counters[x]), '     Average distance b/w instances', str(distances[x]/counters[x]) )   
    total_iter += counters[x]

print('Total: ', str(total_iter))