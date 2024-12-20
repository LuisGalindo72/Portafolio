import math
print('Raiz Cuadrada')
print("~~~~~~~~~~~~~~~~~~")
a=1
b=-3
c=2
x=b*b-4*a*c
if x<0:
 print('No hay solucion')
else:
    x1=(-b+math.sqrt(x))/2*a
    x2=(-b-math.sqrt(x))/2*a
    print('x1=',x1)
    print('x2=',x2)



print('positivo o negativo',x)