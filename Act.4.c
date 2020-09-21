#include<stdio.h>


void capturar_enteros(){
    int enteros[5];
    int sum=0;
    float prom;

    for (size_t i = 0; i < 5; i++)
    {
        printf("\nIntroduce el numero %i: ",i+1);
        scanf("%i",&enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n",enteros[i]);
        sum+=enteros[i];
    }
    prom=sum/5;
    printf("La suma es: %i\n",sum);
    printf("El promedio es: %.2f",prom);

}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s",cadena);
    }
}

int main(){

    int m,n;
    char cadena[50];

    do
    {
        printf("\nMENU\n");
        printf("(1) Capturar enteros\n");
        printf("(2) Mostrar cadenas n veces\n");
        printf("(3) Aregar personaje\n");
        printf("(4) Mostrar personajes\n");
        printf("(0) salir\n");
        scanf("%d",&m);

        switch(m){
            case 1:
                capturar_enteros();
                break;
            case 2:
                printf("\nEscribe una cadena de hasta 20 caracteres: ");
                fflush(stdin);
                fgets(cadena,sizeof(cadena),stdin);
                printf("\ningresa las veces que se repetira: ");
                scanf("%i",&n);
                mostrar(n,cadena);
                break;
            case 3:
                break;
            case 4:
                break;
        }
    } while (m!=0);
    
    return 0;
}