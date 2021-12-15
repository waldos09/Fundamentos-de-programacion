#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a, b;

int main()
{
   srand(time(NULL));
   int **a1, **a2, **a3, F1, F2, F3, F2C1, C1, C2,  C3;
   printf("Ingrese la cantidad de filas para la primer matriz (X) \n ");
   scanf("%i",&F1);
   printf("Ingrese la cantidad de filas para la primer matriz (X) y las columnas de la segunda (Y)\n");
   scanf("%i",&F2C1);
   printf("Ingrese la cantidad de columnas para (Y)\n");
   scanf("%i",&C2);
   printf("\n\n");
   if(F1 >= F2C1){
        F3 = F2C1;
    }else{ F3 = F1;}
   if(C2 >= F2C1){ 
       C3 = F2C1;
    }else{ C3 = C2;}
   
   //array 1
   C1 = F2C1;
   a1 = (int**) calloc(F1, sizeof(int*));
   
   for(a = 0 ; a < F1 ; a++)
   {
      a1[a] = (int*) calloc(C1,sizeof(int));
   }
   
   for(a = 0 ; a < F1 ; a++)
   {
      for(b = 0 ; b < C1 ; b++)
      {
         a1[a][b] = rand()%100;
      }
   }
   
   for(a = 0 ; a < F1 ; a++)
   {
      for(b = 0 ; b < C1 ; b++)
      {
         printf("%d ", a1[a][b]);
      }
      printf("\n");
   }
   printf("\n\n");
   //array 2
   F2 = F2C1; 
   a2 = (int**) calloc(F2, sizeof(int*));
   
   for(a = 0 ; a < F2 ; a++)
   {
      a2[a] = (int*) calloc(C2,sizeof(int));
   }
   
   for(a = 0 ; a < F2 ; a++)
   {
      for(b = 0 ; b < C2 ; b++)
      {
         a2[a][b] = rand()%100;
      }
   }
   
   for(a = 0 ; a < F2 ; a++)
   {
      for(b = 0 ; b < C2 ; b++)
      {
         printf("%d ", a2[a][b]);
      }
      printf("\n");
   }
   printf("\n\n");
   //array 3
   a3 = (int**) calloc(F3, sizeof(int*));
   
   for(a = 0 ; a < F3 ; a++)
   {
      a3[a] = (int*) calloc(C3,sizeof(int));
   }
   
   for(a = 0 ; a < F3 ; a++)
   {
      for(b = 0 ; b < C3 ; b++)
      {
         a3[a][b] = a1[a][b]*a2[a][b];
      }
   }
   
   for(a = 0 ; a < F3 ; a++)
   {
      for(b = 0 ; b < C3 ; b++)
      {
         printf("%d ", a3[a][b]);
      }
      printf("\n");
   }

   for(b = 0 ; b < F3 ; b++){
       free( a3[b]); 
    }
    free(a3);
   for(b = 0 ; b < F2 ; b++){
       free( a2[b]); 
    }
    free(a2);
   for(b = 0 ; b < F1 ; b++){
       free( a1[b]); 
    } 
    free(a1);
   return 0;
}
