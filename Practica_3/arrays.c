#include <stdio.h>
#include <stdlib.h>
#define N 2 //Cantidad de filas
#define M 2 //Cantidad de columnas

int option = 0;
int back;
int mnp1 [N][M];
int mnp2 [N][N];


int main(){
    
    
    printf("Fundamentos de programacion \n");
    printf("Bienvenida esta es la practica 4 \n");
    printf("Este es el menu del programa elija cual opcion desea revisar\n");
    printf("1\t- Suma de matrices con punteros \n");
    printf("2\t- Suma de matrices sin punteros \n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        cpointer();
        break;
    case 2:
        cnormal();
        break;    
    default:
        break;
    }
    return 0 ;
};

int cpointer(){

    int array [2][2];
    printf("Este programa usara punteros para calcular la suma de matrices cuadradas\n");
    int m [2][2];
    //primera matriz
    printf("Ingrese los valores de la primera matriz\n");
    leer((int*)m);
    escribir((int*)m);
    //segunda matriz
    printf("Ahora ingrese los valores de la segunda matriz\n");
    int m2[2][2];
    leer((int*)m2);
    escribir((int*)m2);
    //Suma de matrices
    int mr[2][2];
    printf("Esta es al matriz resultante a partir de la suma de las otras dos\n");
    sumar((int*)mr ,(int*)m, (int*)m2);
    escribir((int*)mr);
    return 0;
};
int cnormal(){
    
    printf("Este programa no usara punteros para calcular la suma de matrices cuadradas\n");
    readnp();
    writenp(mnp1 , mnp2);
    plusnp();
    return 0;
};
//leer con apuntadores

void leer(int * array){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("Ingrese el valor [%d,%d]\t",i,j);
            scanf("%d",array + i*M + j);
        }
        
    }
    
};
//imprime el array con apuntador

void escribir(int * array){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d\t", array[i*N+j]);
        }
        
    }
    printf("\n");
    
};
//suma las matrices con apuntadores

void sumar(int * array, int * m , int * m2){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            array [i*M + j] = m[i*N+j] + m2[i*N+j];
        }
        
    }
    

}

//leer  matrices sin punteros
int readnp(){

    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Ingrese el valor [%d,%d]\t",i,j);
            scanf("%d", &mnp1[i][j]);
        }
        
    }
    printf("Ahora ingrese la segunda matriz\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Ingrese el valor [%d,%d]\t",i,j);
            scanf("%d", &mnp2[i][j]);
        }
        
    }

    return 0;
}
//imprimir matrices sin punteros
void writenp(){

    printf("Estos son los valores de la primera matriz\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d\t", mnp1[i][j]);
            
        }
        
    }
    printf("\n");
    printf("Estos son los valores de la segunda matriz\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d\t", mnp2[i][j]);
            
        }
        
    }
    printf("\n");  
    return 0;
}
void plusnp(){

    printf("Los  resultados  de la suma son:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int  mnpr [N][M];
            mnpr [i][j] = mnp1[i][j] + mnp2[i][j];
            printf("%d\t", mnpr[i][j]);
        }
        
    }
    return  0;
}