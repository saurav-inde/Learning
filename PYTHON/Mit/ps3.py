from string import  *

def countSubStringMatch(target,key):
    start = -1
    indexes = []
    while True:
        temp = find(target, key, start+1)#if we write start only here it will return same find value previous
        #print temp
        if temp < 0:
            return indexes
        start = temp
        indexes.append(temp)
        #print start, ':start'
    
    
    
print 'key was found at indexes', str(countSubStringMatch('skdkdjsksddhdskerirskfgsksskskskskhskskskskcmskolfgkskfskuskyskskghask', 'sk'))   

