the_number_str =  (input('number? '))
number_len = len(the_number_str)
the_number = int(the_number_str)
last_digit = the_number %  10 


def zero_inserter( number, expected_size): #return string with 0 inserted
    difference = expected_size - len(str(number))



return_count = 1
def sub_num_returner():
    """"This is the funtion which is called by the main loop untill completee nuber is returned
    return_count keeps the record of how many times and hence upto what the sub num has been returned"""
    global return_count  
    """global keyword tells the function to retrive the value of return count from the global defination of return_count"""
    string_num = str(the_number)
    return_count += 1

    return string_num[number_len - return_count:]




pair_list = []
temp_pair_list = []
index_list = [] ##clear method empties list and del list[i] deltes at ith index




for i in range(0, 10): #if we restrict range to 6 then 7*7 will not be found
           for j in range(1, 10):
               if (i*j % 10 )== last_digit:
                   if (i,j) not in temp_pair_list:
                       temp_pair_list.append((i, j)) 
print(temp_pair_list)




while return_count < number_len:
   sub_num =  int(sub_num_returner())
   

   ## print(sub_num)
   
