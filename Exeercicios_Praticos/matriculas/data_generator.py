import random

MATRICULA_SIZE = 1000000000
NUM_OF_LISTS = 100
SMALL_INPUT_SIZE = 100
MEDIUM_INPUT_SIZE = 1000
BIG_INPUT_SIZE = 10000

count = 0
output_file = open('small.txt', 'w')
for i in xrange(NUM_OF_LISTS):
	outputt = []
	for j in xrange(SMALL_INPUT_SIZE):
		outputt.append(int(random.random() * MATRICULA_SIZE))
	output_str = " ".join(str(x) for x in outputt)
	output_file.write(output_str + "\n")
	count += 1
output_file.close()
print "Adicionadas {} listas small.".format(count)

count = 0
output_file = open('medium.txt', 'w')
for i in xrange(NUM_OF_LISTS):
	outputt = []
	for j in xrange(MEDIUM_INPUT_SIZE):
		outputt.append(int(random.random() * MATRICULA_SIZE))
	output_str = " ".join(str(x) for x in outputt)
	output_file.write(output_str + "\n")
	count += 1
output_file.close()
print "Adicionadas {} listas medium.".format(count)

count = 0
output_file = open('big.txt', 'w')
for i in xrange(NUM_OF_LISTS):
	outputt = []
	for j in xrange(BIG_INPUT_SIZE):
		outputt.append(int(random.random() * MATRICULA_SIZE))
	output_str = " ".join(str(x) for x in outputt)
	output_file.write(output_str + "\n")
	count += 1
output_file.close()
print "Adicionadas {} listas big.".format(count)
