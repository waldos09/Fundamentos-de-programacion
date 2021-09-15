#include <stdio.h>
#include <math.h>

int a , b , c;
double x1 , x2;

int main()
{
    printf("Practica 3 ""Ecuaciones de seguno grado"" \n");
    printf("Este es un programa para calcular los resultados de una ecuacion de segundo grado \n\n");
    printf("Ingresa el coeficiente de X \n");
    scanf("%d", &a);
    printf("Ingresa el coeficiente de Y \n");
    scanf("%d", &b);
    printf("Ingresa el Termino Independiente \n");
    scanf("%d", &c);

    if ((pow(b , 2) - (4*a*c)) < 0)
    {
        printf("Esta ecuacion no puede resolverse con numeros reales \n");
    }else
    {
        x1 = ((-b) + sqrt( pow(b , 2) - (4*a*c))) / (2*a);
        x2 = ((-b) - sqrt( pow(b , 2) - (4*a*c))) / (2*a);
        printf("Estos son los dos posibles resultados de la ecuacion cuadratica:");
        printf("%lf \n", x1); 
        printf("%lf \n", x2); 
    }
    return 0;
}
