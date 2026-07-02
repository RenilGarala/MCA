mobile_app=[1,3,5,6,8,10,14]
railway_counter=[2,4,7,9,11,12,13]

final_unified=[]
p1=0
p2=0

for i in range(p1,len(mobile_app)):
    for j in range(p2,len(railway_counter)):
        if(mobile_app[p1] > railway_counter[p2]):
            final_unified.append(railway_counter[p2])
            p2=p2+1
        elif(i < j):
            final_unified.append(mobile_app[p1])
            p1=p1+1
    
if(len(mobile_app) != p1):
    final_unified.append(mobile_app[p1])
else:
    final_unified.append(railway_counter[p2])
            
print(p1)
print(p2)
print(final_unified)