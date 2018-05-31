entrada = map(int, raw_input().split(" "))
E = []
inicio = 1
soma = entrada[0]
sub = [(0,0)]
soma_elementos_sub = [entrada[0]]
E.append( (sub[0], soma_elementos_sub[0]) )
for i in range(0, len(entrada)-1):
	if (soma < 0):
		inicio = i+1
		soma = entrada[i+1]
		if (entrada[i+1] > soma_elementos_sub[i]):
			sub.append((i+1, i+1))
			soma_elementos_sub.append(entrada[i+1])
		else:
			sub.append(sub[i])
			soma_elementos_sub.append(soma_elementos_sub[i])
	else:
		if(entrada[i+1] + soma > soma_elementos_sub[i]):
			sub.append( (inicio, i+1) )
			soma_elementos_sub.append(entrada[i+1]+soma)
			soma = soma + entrada[i+1]
		else:
			sub.append( sub[i] )
			soma_elementos_sub.append(soma_elementos_sub[i])
			soma = soma + entrada[i+1]
	E.append( (sub[i+1], soma_elementos_sub[i+1]) )
print E[-1]
