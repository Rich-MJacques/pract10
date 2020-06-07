#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
const int N = 8;
//const int n= (n+1);
int reinas[9]; // guarda la fila donde se colocan las reinas
bool valido(int i);

/*
*probar solucion
*/
void colocarReina(int i, bool *solucion){
    int k;
    *solucion = false; // exito
    k = 0;//contador de movimientos
    do{
        k++;
        reinas[i] = k; // colocar la reina i en la fila k. ANOTAR SELECCION

        if(valido(i))
        {
            if(i<N){
            colocarReina(i+1, solucion);
                if(!solucion){
                //RETROCESO
                reinas[i]= 0;//borrar anotacion
                }
            }else{
            *solucion= true;
            }
        }
    }while(!solucion && (k<8));
}
/*
*comprueba si la reia de la columna i es atacada por 
alguna reina colocada anteriormente
*/
bool valido(int i){
    int r;
    bool v = true;

for (r=1; r<=i-1; r++){
    v = v && (reinas[r]!=reinas[i]);//no exista otra reina en l amisma fila
    v = v && ((reinas[i]-i)!=(reinas[r]-r));//validar qu eno exista otra reina en la diagonal1
    v = v && ((reinas[i]+i)!=(reinas[r]+r));//validar qu eno exista otra reina en la diagonal2
    }
    return v;
}

int main(int argc, char **argv){
    bool solucion;
    colocarReina(1, &solucion);
    for (int j=1; j<9 ; j++){
        printf("%d\n", reinas[j]);
    }
}
/*
**1*****2**
***1***2***
****1*2****
*****R*****
****2*1****
***2***1***
**2*****1**
}
*/