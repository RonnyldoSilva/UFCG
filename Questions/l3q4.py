import numpy

def backup(n,c,tamanhos,valores):
	tabela = numpy.zeros(shape=(n+1,c+1))

	for i in range(1, n):
		for w in range(1, c):
			if (tamanhos[i-1] <= w):
				if (valores[i-1] + tabela[i-1][w - tamanhos[i-1]] > tabela[i-1][w]):		
					tabela[i][w] = valores[i-1] + tabela[i-1][w - tamanhos[i-1]];
				else:
					tabela[i][w] = tabela[i-1][w]  
			else:
				tabela[i][w] = tabela[i-1][w]


	return tabela

def recupera_elementos(tabela, tamanhos, n, c):
	elementos = numpy.zeros[shape(1, n)]:
	i = n
	j = c
	while (j > 0 and i >0):
		if (tabela[i][j] != tabela [i-1][j]):
			elementos[i] = 1
			j = j - tamanhos[i]
		i-=1

	return elementos

n = int(raw_input())
c = int(raw_input())
tamanhos = map(int, raw_input().split(" "))
valores = map(int, raw_input().split(" "))



