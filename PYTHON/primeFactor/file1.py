from types import new_class


#Takes prime input from user
test_number = input("Enter prime: ")
num_len = len(test_number) #finds number of digits in it

#list of pairs(dynamic) matching tail of primes
satisfying_pairs = []

for position in range(0, num_len):
    current_position = num_len - position - 1
    new_digit = test_number[current_position]
    
    # sub_num keeps increasing as it adds digits in itself from end of prime number
    if position == 0:
        sub_num =  new_digit
        sub_num_int = int(sub_num)
    else:
        sub_num +=  new_digit    
        sub_num_int = int(sub_num)

    for dec_digit in (0, 10):
        for dec_digit2 in(0, 10):

            #adds digit to multiplying pair
            if position == 0:
                dec_digit_added = dec_digit
                dec_digit2_added =dec_digit2
            else:
                dec_digit_added_str = str(satisfying_pairs[position][0])
                dec_digit_added_str += str(dec_digit)
                dec_digit_added = int(dec_digit_added_str) 

                dec_digit2_added_str = str(satisfying_pairs[position][1])
                dec_digit2_added_str += str(dec_digit2)
                dec_digit2_added = int(dec_digit2_added_str)

            #if else
            if dec_digit_added* dec_digit2_added == sub_num_int :
                temp_pair = [dec_digit_added, dec_digit2_added]
                satisfying_pairs.append(temp_pair)
            else:
                continue    