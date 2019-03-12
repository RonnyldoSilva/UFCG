import random

SMALL_INPUT_SIZE = 1000
MEDIUM_INPUT_SIZE = 10000
BIG_INPUT_SIZE = 100000

count = 0
output_file = open('small.txt', 'w')
for i in xrange(SMALL_INPUT_SIZE):
	outputt = [1, 5, 25]
	outputt = [int(random.random() * SMALL_INPUT_SIZE)] + outputt
	output_str = " ".join(str(x) for x in outputt)
	output_file.write(output_str + "\n")
	count += 1
output_file.close()
print "Adicionadas {} entradas small.".format(count)

count = 0
output_file = open('medium.txt', 'w')
for i in xrange(MEDIUM_INPUT_SIZE):
	outputt = [1, 5, 10, 25, 50, 100]
	outputt = [int(random.random() * MEDIUM_INPUT_SIZE)] + outputt
	output_str = " ".join(str(x) for x in outputt)
	output_file.write(output_str + "\n")
	count += 1
output_file.close()
print "Adicionadas {} entradas medium.".format(count)

count = 0
output_file = open('big.txt', 'w')
for i in xrange(BIG_INPUT_SIZE):
	outputt = [1, 3, 5, 7, 10, 18, 25, 32, 43, 50]
	outputt = [int(random.random() * BIG_INPUT_SIZE)] + outputt
	output_str = " ".join(str(x) for x in outputt)
	output_file.write(output_str + "\n")
	count += 1
output_file.close()
print "Adicionadas {} entradas big.".format(count)
