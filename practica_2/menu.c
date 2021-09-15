#include <stdio.h>
#include <math.h>

int option = 0;
int back;

int main(){

    printf("Fundamentos de Porgramacion\n");
    printf("Bienvenida estas son las Practicas 2 y 3\n");
    printf("Este es el menu del programa elije cual de las dos practicas deseas revisar\n");
    printf("1\t- Obtencion del promedio \n");
    printf("2\t- Calculadora de ecuaciones de segundo grado \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        promedio();
        break;
    case 2:
        ecus();
        break;
    default:
        break;
    }
    return 0;
};
int promedio(){

    int cant=0;
    int total = 0;
    double promedio;
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
    printf("El promedio de los datos mostrados es: %lf \n", promedio);
    printf("deseas regresar al menu \n");
    printf("1\t- Si \n");
    printf("2\t- No \n");
    scanf("%d", &back);
    if (back == 1)
    {
        main();
    }else
    {
        printf("Tons Adiooo");
    }        
    return 0;
};
int ecus(){
    
    int a , b , c;
    double x1 , x2;
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
    printf("deseas regresar al menu \n");
    printf("1\t- Si \n");
    printf("2\t- No \n");
    scanf("%d", &back);
    if (back == 1)
    {
        main();
    }else
    {
        printf("tons Adiooo");
    }    
    return 0;
}