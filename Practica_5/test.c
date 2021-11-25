#include<stdio.h>
#include<stdlib.h>

//sinonimo de estructura
typedef struct nodo{

    char *nombre;
    struct nodo *next;
}Grupo;

Grupo *ListaGrupo(Grupo *lista){

    lista = NULL;
    return lista;

}

Grupo *addgrupo(Grupo*lista,char*nombre){

    Grupo *nuevoGrupo,*aux;
    nuevoGrupo = (Grupo*)malloc(sizeof(Grupo));
    nuevoGrupo->nombre = nombre;
    nuevoGrupo->next=NULL;
    if (lista==NULL)
    {
        lista = nuevoGrupo;
    }else{
        aux = lista;
        while (aux->next != NULL){
            aux = aux->next;    
        }
        aux->next = nuevoGrupo;
        
    }
    return lista;
    
}

int main(){

    Grupo * lista = ListaGrupo(lista);
    lista = addgrupo(lista,"PRUEBA");
    lista = addgrupo(lista,"PRUEBA2");
    //imprimir datos
    while(lista != NULL){
        printf("%s\n",lista->nombre);
        lista = lista->next;
    }
    return 0;
}