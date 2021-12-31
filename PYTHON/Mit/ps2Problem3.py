"""There is a theorem which says if there are five consecutive integers n, n+1,.......n+5 for which  solution to equation 6x + 9y + 20z = integers exixt
then for every  other integer after n+5 also solution exists."""
a=6
b = 9
c = 20
best_sofar = 0
consecutive = 0

"""print 'solutions for 6x +9y + 20z =', str(n), 'if exist will appear here.'"""



for n in range(1, 100):
    solution_exixt = False #after searching for solution it holds the evidence if solutions exist
    for x in range(0, n+1):
        for y in range(0, n+1-(x)): #as there is limit to maximum value of x hence limit to x+y  and hence on y acc to value of x
            for z in range(0, n+1-(x+y)):
                
                if a*x +b*y +c*z == n:
                    solution_exixt = True
                    
                    #print 'x =', str(x),'y =', str(y), 'z =',str(z)
                    #print 'consecutive set to', str(consecutive), '\n\n'




    if not solution_exixt:
        print '\tNo solution exist for n =', str(n)
        best_sofar = n
        consecutive = 0;
        #print 'consecutive set to', str(consecutive), '\n\n'

    else:
        consecutive += 1




    if consecutive == 6: # 6 not working but why?????
        break
    
print 'Bigest number for which solution not exixt is', str(best_sofar)
