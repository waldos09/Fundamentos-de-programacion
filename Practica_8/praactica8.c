#include <stdio.h>
#include <stdlib.h>

int x;
int n = 2;
int leer;

int main(){

    int no;
    int cont = 0;
    int c=0, add=0;
    FILE *pf;

    printf("Ingrese cuantos primos quiere:\n");
    scanf("%d",&no);
    pf = fopen("PRIMOS.txt","r");
    while (1){
        c = fgetc(pf);
        if (c == '\n')
        {
            add++;
        }if (c == EOF)
        {
            printf("%d\n",add);
            break;
        }
    }
    fclose(pf);
    if (no < add){
        printf("\n");
        pf = fopen("PRIMOS.txt","r+b");
        //fread(&leer, sizeof(int),1,pf);
        while (!feof(pf))
        {
            fread(&leer,sizeof(char),1,pf);
            printf("%c",leer);
            
        }
    }/*if (no > add){

    }*/else{
        int data[no];
        while (no > 0){
        x = 1;
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                x = 0;
                break;
            }
        }
        if (x){
            
            printf("%d--",n);
            data[cont] = n;
            cont++;         
            no--;
        }
        n++; 
        }
        if ((pf = fopen("PRIMOS.txt","w"))!= NULL){
            for (int i = 0; i < cont; i++){
                
            fprintf(pf,"%d",data[i]);
            fputs("\n",pf);
            }
        }
        fclose(pf);
        //lee del archivo
        printf("\n");
        pf = fopen("PRIMOS.txt","r+b");
        //fread(&leer, sizeof(int),1,pf);
        while (!feof(pf))
        {
            fread(&leer,sizeof(char),1,pf);
            printf("%c",leer);
            
        }
        fclose(pf);
    }
    
    
    
    return 0;
}

