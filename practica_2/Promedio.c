#include <stdio.h>

int cant=0;
int total;
double promedio;

int main(){

    printf("Practica 2 ""promedio"" \n");
    printf("Este es un programa para calcular el promedio \n\n");
    
    printf("inserta la cantidad de datos que deseas ingresar \n");
    scanf("%d", &cant);

    while (cant <= 0)
    {
        printf("No es posible esa cantidad UwU \n");
        printf("Ingrese uan cantidad aceptable \n");
        scanf("%d", &cant);
    }
    
    int data[cant];
    
    for (int i = 0; i < cant; i++)
    {
        printf("Ingrese los datos que desea usar \n");
        scanf("%d", &data[i]);
        while (data[i] < 0)
        {
            printf("Este dato no puede ser ingresado \n");+
            printf("Intentelo de nuevo \n");
            scanf("%d", &data[i]);
        };
        
        total = total + data[i];
    };
    
    printf("Esta es al suma de los datos: %d \n", total);
    promedio = (double) total / cant ;
    printf("El promedio de los datos mostrados es: %lf \n", promedio );


    return 0;
}

