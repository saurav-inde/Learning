file_path = "python resources/chapter_10/pi_million_digits.txt"

sum = 0
with open(file_path) as myfile:    
    for line in myfile:
        for digit in line:
            if digit != '\n' and digit != ' ':
                sum += int(digit)
try:
    print(sum + f)         
except NameError:
    print(sum)