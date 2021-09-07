#include<stdio.h>

char name[10];
int option = 0, a , b , resultado, year, moth, day;
long date;
double divi;

int main(){

    printf("Hello World en Lenguaje C\n");
    printf("Cual es tu nombre?\n");
    scanf("%s", name);
    printf("Mucho gusto %s, bienvenido al lenguaje C \n", name);
    printf("Dime que quieres que haga %s\n", name);
    printf("1\t- Suma de 2 numeros \n");
    printf("2\t- Cociente de la division de dos numeros \n");
    printf("3\t- Numero par o impar \n");
    printf("4\t- Divide la fecha segun los digitos de un numero \n");
    printf("Elije alguna de las siguientes opciones %s \n",name);
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        
        printf("Has elegido la opcion 1 \n");
        printf("Suma de dos numeros \n");
        printf("Dime un numero \n");
        scanf("%d" , &a);
        
        printf("Dime otro numero \n");
        scanf("%d" , &b);

        resultado = a + b;
        printf("El resultado de la suma es: %d",resultado);

        break;

    case 2:
        
        printf("Has elegido la opcion 2 \n");
        printf("Cociente de la division de dos numeros \n");
        printf("Dime el numero que quieres que divida \n");
        scanf("%d", &a);
        printf("Entre que numero lo quieres dividir \n");
        scanf("%d", &b);
        while (b == 0)
        {
            printf("Error no puedo dividir entre 0 \n");
            printf("Ingrese un numero valido");
            scanf("%d", &b);
        }
        divi = (double) a / b;
        printf("El resultado de la division de %d entre %d es igual a: %lf \n",a, b, divi);
        break;

    case 3:

        printf("Has elegido la opcion 3 \n");
        printf("Numero par o impar \n");
        printf("Ingresa un numero");
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("El numero %d es par", a);
        }else{
            printf("El numero %d es impar", a);
        }
        break;

    case 4:

        printf("Has elegido la opcion 4 \n");
        printf("Divide la fecha segun los digitos de un numero \n");
        printf("Escribe el numero que quieras dividir");
        scanf("%ld", &date);
        year = date /10000;
        resultado = date % 10000;
        moth = resultado/100;
        day = resultado % 100;
        printf("El dia es: %d \n",day);
        printf("El mes es: %d \n",moth);
        printf("El a%co es: %d \n",164, year);
        break;
            
    }


    return 0;
}