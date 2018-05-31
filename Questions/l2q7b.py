import math

def bs(A, key, left, right):#  //busca a chave key em A[left..right]
	mid = int(math.ceil((left+right)/2.0))
	if (left == right):
		return left
	elif A[mid] == key:
		return mid
	else:
		if key < A[mid]:
			return bs(A, key, left, mid-1)
		else:
			return bs(A, key, mid, right)


A = [2,32,6,1,76,35,0,9,11,3,5,10,8]


key = int(raw_input())
left = 0
right = len(A)-1

print A
print bs(A, key, left, right)
