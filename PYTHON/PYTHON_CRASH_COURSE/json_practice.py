from json import *
numbers = [1,845,69,5954,[54,45,854,8,9]]
with open("json_dump.txt", 'r') as myfile:
    num= load(myfile)
    print(num)

