"""
for para listas

"""
def forlist():
    for x in [1, 2, 3, 4, 5]:
        print(x)

    for x in ["uno", "dos", "tres", "cuatro", "cinco"]
        print(x)

"""
for para rangos

"""
def forrange():
    for x in range(5):
        print(x)

    for y in range(-3,3):
        print(y)

    for z in range(-4, 2, 2):
        print(z)

    for i in range(5, 0, -1):
        print(i)

    
"""
for para diccionarios
"""
def fordic():
    diccionario = {'manzana': 1, 'pera':3, 'uva':10 }
    for clave, valor in diccionario.items():
        print(clave, " = ", valor)

    for clave in diccionario.keys():
        print(clave)

    for valor in diccionario.values():
        print(valor)
    
    for idx, x in enumerate(diccionario):
        print("el indice {} del elemento {}".format(idx,x))

"""
else de for
"""

def elsefor():
    for x in range(5):
        print(x)
    else:
        print("la cuenta se termino")
    
def elsefor2():
    for x in range(5):
        print(x)
        if x==2:
            break
    else:
        print("la cuenta se termino")


if __name__ == "__main__":
    forlist()
    forrange()