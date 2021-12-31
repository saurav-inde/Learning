#with open('strings.py') as myfile:
#myfile = open("strings.py")
# content = myfile.read()
import pandas
output = pandas.read_csv('temps_today.csv')
print(output.mean())