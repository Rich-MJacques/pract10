def insertar(lista,dato):
    lista.append(dato)#agregar al final


def borrar(lista):
    dato=lista.pop()#elimina al final de la lista
    return dato

def imprimir_pila(lista):
    lista.reverse()
    for x in lista:
        print(x)
    print()
    lista.reverse()

def main():
    pila = [0]
    insertar(pila, "lista1")
    insertar(pila, 2)
    imprimir_pila(pila)
    print(borrar(pila))
    print()
    imprimir_pila(pila)

if __name__ == "__main__":
    main()
