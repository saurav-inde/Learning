from math import * #now we dont need to use math. beforeusing math functions
n = raw_input('Enter N: ')
sum = 0.0


#check the numbers to b prime
for candidate in range(2, int(n)):
    flag = 1
    for num in range(2,(sqrt(candidate) + 1)):
        if candidate % num == 0:
            flag = 0
    #adds the log of primes to sum
    if flag == 1:
            sum += log(candidate)

print 'N: ' , str(n)
print 'sum of logs of primes before n', str(sum)
print 'ratio = ', str(sum/int(n))

##Mathematically for a prime number n not very small
#ratio of products of prime befpre n to that of e^n approaches 1 as n gets bigger
