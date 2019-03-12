import sys, os
import argparse
import time

parser = argparse.ArgumentParser()
parser.add_argument('file', metavar='file_name', type=str, nargs='+')
args = parser.parse_args()
file_name = args.file[0] + ".txt"

sys.path.append('..')

from algorithms import retorna_matriculas_decrescente

count = 1
total_time = 0
output = open('output.txt', 'w')

with open(file_name, 'r') as arquivo:
	for ith_list in arquivo:
		alist = map(int, ith_list.split())
		
		start = time.clock()
		sorted_list = retorna_matriculas_decrescente(alist)
		finish = time.clock()
		
		str_list = " ".join(str(x) for x in sorted_list)
		
		time_diff = (finish - start) * 1000000
		total_time += time_diff
		
		output.write("Caso {}: ".format(count) + str_list + "\n")
		output.write("Executou em: {} microsegundos\n\n".format(time_diff))
		count += 1

output.close()
print "Tempo total: {} microsegundos".format(total_time)
