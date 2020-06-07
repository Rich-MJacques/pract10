def numeroMayor(a,b, c):
    if a > b and a > c:
        print("el numero es {}" .format(a))
    elif(b > c and b> a):
        print("el numero es {} ".format(b))
    else:
        print("el numero es {} ".format(c))
    

if __name__ == "__main__":
    a = int(input())
    b = int(input())
    c = int(input())
    numeroMayor(a,b,c)
