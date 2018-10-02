#To find the distance of all nodes from a source for neg weights as well


"""
Relaxation:
			if d(u)+w(u,v)<d(v):
				d(v) = d(u)+w(u,v)


Fails when weight of a complete cycle i.e a loop i a graph is zero. This can be detected
by evaluating the n+1 th iteration , if the values change then there is a negative weight cycle.
"""


#Edges:
graph = {1:[2,3,4],2:[5],3:[2,5],4:[3,6],5:[7],6:[7],7:[]}
weights = {1:[6,5,5],2:[-1],3:[-2,1],4:[-2,-1],5:[3],6:[3],7:[]}

#no of nodes
n = 7

#index zero is dummy, initializing index 1 with 0 to define 1 as the source
d = [0,0,100000,100000,100000,100000,100000,100000]



for j in range(n-1):
	for i in range(1,n+1):
		ctr=0
		for x in graph[i]:
			u = i
			v = x
			if (d[u]+weights[u][ctr])<d[v]:
				d[v] = d[u]+weights[u][ctr]
			ctr+=1

print(d)
