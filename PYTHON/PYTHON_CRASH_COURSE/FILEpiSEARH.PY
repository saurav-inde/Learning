file_path = "python resources/chapter_10/pi_million_digits.txt"

flag = 0
line_count = 0

phone_number = input("Enter phone number: ")

with open(file_path) as myfile:    
    for line in myfile:
        line_count += 1
        if phone_number in line:
            flag = 1
            print(f"{phone_number} found at line {line_count} position {line.find(phone_number) + 1}")
            break

if flag == 0:
    print("Not found")