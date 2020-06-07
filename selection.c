/* Programa que ordenar numeros y 
recibe el tamaño de areglos de 10 maximo
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void selectionsort(int a[], int n){
    int aux, min;
    for(int i = 0; i<n-1; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[min]) min = j;
        }
        aux = a[i];
        a[i] = a[min];
        a[min = aux;]
    }
}

int main(int argc, char **argv){
    FILE *file;
    int tam;
    int *a;
    if(argc <3){
        print("faltan argumentos");
        return -1;
    }
    if(atrcmp(argv[1],"-a") == 0){
        file = fopen(argv[2], "r");
        if(!file){
            printf("El archivo %s no se peude abrir\n", argv[2]);
            return -1;
        }
        char numero[10];
        int i = 0;
        char c;        
        fscanf(file, "%s", &numero);
        printf("%s\n", numero);
        tam = atoi(numero);
        a = (int*)malloc(sizeof(int)*tam);
        int j = 0;
        c = fgetc(file);
        while (c! = EOF) {//fin de archivo
            i = 0;
            strcpy(numero, "");
            while(isdigit(c)){
                 numero[i++] = c;
                 c = fgetc(file);
            }
            numero[i] = '\0';
            if(strcmp(numero, "") !=0){
                a[j++] = atoi(numero);
            }

            c = fgetc(file);
        }
        selectionsort(a, tam);
    }else{
        tam = argc -1;
        int *a = (int*)malloc(size of(int*(argc-1));

         for(int i = 1; i< (argc); i++){
            a[i-1] = atoi(argv[i]);
         }
        selectionsort(a, tam);
    }
    for(int i = 0; i < tam; i++){
        print("%d", a[i]);
    }
    print("\n");
    return 0;
}
