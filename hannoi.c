#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char origen, char destino, char aux){
    if(n ==1){
        printf("mover disco %d desde %c hasta %c\n", n, origen, destino);
    }else{
        hanoi(n-1, origen, aux, destino);//movern-1 discos al auxiliar
        printf("Mover disco %d de %c hasta %c\n", n, origen, destino);
        hanoi(n-1, aux, destino, origen);
    }
}

int main (int argc, char **argv){
    if(argc < 2){
        print("Falta el numero discos\n");
        return -1;
    }
    int n = atoi(argv[1]);
    hanoi (n, '1', '3', '2');
    reuturn 0;
}