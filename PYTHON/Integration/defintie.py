expression = input("Enter mathematical function in variable y: ")
a = int((float(input("Enter lower limit:")))*10000)
b =int((float(input("Enter upper limit:")))*10000)
area = 0

for x in range(a, b):
    y = x  / 10000 
    area += (float(eval(expression))/10000)
print(area)