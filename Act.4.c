#include<stdio.h>

int main(){

    int m;

    do
    {
        printf("\nMENU\n");
        printf("(1) Capturar enteros\n");
        printf("(2) Mostrar cadenas n veces\n");
        printf("(3) Aregar personaje\n");
        printf("(4) Mostrar personajes\n");
        printf("(0) salir\n");
        scanf("%d",&m);
        
    } while (m!=0);
    
    return 0;
}