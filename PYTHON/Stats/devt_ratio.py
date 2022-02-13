import statistics
import random


data_set = [0]*1000

def abs_devt(data):
    mean = sum(data)/len(data)
    sum_dev = 0
    for nums in data:
        sum_dev += abs(mean - nums)
    return sum_dev/len(data)     
        

def _dataset_gen(n, a, b):
    for i in range(n):
        data_set[i] = (random.choice(range(a, b)))



def ratio_calc(iter, a, b, n = 100):

    for j in range(iter):
        #data_set = []
        _dataset_gen(n, a, b)
        print(f"dataset: {data_set[:n]}")
        print(f"std_dev : abs_dev = {statistics.stdev(data_set[:n]) / abs_devt(data_set[:n])}\n")


n = int(input("Enter datasize: "))      
iter= int(input("Enter iters: ")) 
a = int(input("Lower guess range: "))
b = int(input("upper guess range: "))     
ratio_calc(iter,a, b, n)