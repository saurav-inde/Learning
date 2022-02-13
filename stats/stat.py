import statistics
datasets = []
while True:
    temp = input()
    try:
        a=float(temp)
    except ValueError:
        break
    else:   
        datasets.append(float(temp))

print(f"Mean: {sum(datasets)/len(datasets)}")    
print(f"variance: {statistics.variance(datasets)}")
print(f"standard deviation: {statistics.stdev(datasets)}")


