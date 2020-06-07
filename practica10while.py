def factorial(n):
    #espaios en blanco causan problemas 
    i = 2
    temp = 1
    while i <= n:
        temp = temp*i
        i = i+1
    return temp

    
if __name__ == "__main__":
    a = int(input("ingresa un numero"))
    print(factorial(a))