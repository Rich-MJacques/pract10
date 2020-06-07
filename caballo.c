#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int N  = 8;//tamaño del tablero
int tablero[9][9];
int d[8][2] = {{2,1}, {1,2}, {-1,2}, {-2,1}, {-2,-1}, {-1,-2}, {1,-2}, {2,-1}};


void saltoCaballo(int i, int x, int y, bool *solucion){
    int nx, ny;//variables aux
    int k=0;

    *solucion = false;
    do{
        k++;
        nx = x + d[k-1][0];
        ny = y + d[k-1][1];
        if((nx>=1) && (nx<=N) && (ny>=1) && (ny<=N) && (tablero[nx][ny]== 0)){
            tablero[nx][ny] = i;
            if(i < N*N){
                saltoCaballo(i+1, nx, ny, solucion);
                if(!solucion){
                    tablero[nx][ny] = 0;                    
                }
            }else{
                *solucion = true;
            }
        }
    }while((k<8) && !(*solucion));
}

void imprimirTablero(){
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++){
        printf("%d ", tablero[i][j]);
        }
        printf("\n");

}

int main(){
    bool sol;
    saltoCaballo(1, 3, 3, &sol);
    imprimirTablero();
    return 0;
}
//pasar a python
//
//
//