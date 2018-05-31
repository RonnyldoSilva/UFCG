#coding: utf-8

def sort(A):
	flag = True
	while flag:
		flag = False
		for i in range(len(A) -1):
			if(A[i] > A[i+1]):
				aux = A[i]
				A[i] = A[i+1]
				A[i+1] = aux
				flag = True

	return A

A = map(float, raw_input().split(" "))

B = map(float, raw_input().split(" "))


A = sort(A)
B = sort(B)

total = 0
for i in range(len(A)-1, -1, -1):
	p = A[i]**B[i]
	total +=p
	print p

print "Total = %.2f" % (total)
