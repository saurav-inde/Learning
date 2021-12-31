def sum_function(n, m):
    return ((m-n+1)*(m+n))/2

low = int(input('Enter Lower limit: '))
high = int(input('Enter Lower limit: '))
print(sum_function(low, high))