n = int(raw_input('Enter n for finding satisfying x,y,z in 9x +9y + 20z = n: '))
solution_exixt = False #after searching for solution it holds the evidence if solutions exist
a=6
b = 9
c = 20
print 'solutions for 6x +9y + 20z =', str(n), 'if exist will appear here.'
for x in range(0, n+1):
    for y in range(0, n+1-(x)): #as there is limit to maximum value of x hence limit to x+y  and hence on y acc to value of x
        for z in range(0, n+1-(x+y)):
            
            if a*x +b*y +c*z == n:
                solution_exixt = True
                
                print 'x =', str(x),'y =', str(y), 'z =',str(z)

if not solution_exixt:
    print '\tNo solution exist for n =', str(n)
    
