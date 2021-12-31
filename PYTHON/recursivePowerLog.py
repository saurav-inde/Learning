def pow_fun(base, pow):
    if pow == 1:
        return base
    elif (pow / 2) * 2 == base:
        
        return pow_fun(base*base, pow/2)    
    else:
        return base * pow_fun(base*base, (pow - 1)/2)    

###body
number = int(input('Enter base: '))
poww = int(input('Enter power: '))   
return_val =  str(pow_fun(number, poww))
print(str(number), '**', str(poww), ' = ', return_val)