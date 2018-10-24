import sys

# This algorithm uses backtrack to solve the subset sum problem.

def subSetSumRecur(mySet, n, goal, lis):
  if(goal==0):
    return True
  if goal<0 or n>=len(mySet) :
    return False
  if subSetSumRecur(mySet, n+1, goal - mySet[n], lis):
    lis.append(mySet[n])
    return True
  if subSetSumRecur(mySet, n+1, goal, lis):
    return True
  return False

def retorna_minimo_moedas(valor, tipos_moedas):
    print valor, tipos_moedas
    resultado = subset(tipos_moedas, valor)
    if resultado == sys.maxint:
        return -1
    else:
        return resultado


mySet=[1,2,3,4,5,6,7,8,9]

def subset(mySet, goal):
    smallSet = sys.maxint
    for i in range(len(mySet)):
        lis =[]
        subSetSumRecur(mySet[i:], 0, goal, lis)
        if len(lis)>0:
            if len(lis) < smallSet:
                smallSet = len(lis)
    return smallSet



print retorna_minimo_moedas(17, mySet)
