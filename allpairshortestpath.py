#Shortest Distance between all pairs of nodes

#Index 0 is not being used its just ant random number(dummy value)
cost= {1:[1,0,3,100005,7],2:[1,8,0,2,10000],3:[1,5,10000,0,1],4:[1,2,10000,10000,0]}

#number of nodes
n = 4






for k in range(1,n+1):
	for i in range(1,n+1):
		for j in range(1,n+1):
			#updating the cost
			cost[i][j] = min(cost[i][j],(cost[i][k]+cost[k][j]))

print(cost)