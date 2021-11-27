#include <stdio.h>
#include <string.h>

char tem[30];
int temp[30];
int op=0;
int flag=0;


int x =0;

struct subject{
    char materia[10];
    char profesor[10];
    char horario[10];
    int calificacion[3];
    int final;
};


/*Crear una estructura de Alumno*/
struct Alumno {

    /*Informacion del Alumno*/
    /*Nombre*/
    char name[10];
    /*Grupo*/
    char group[1];
    /*Boleta*/
    int id;
    /*Materias*/
    struct subject asubject[3];
}
// arreglo de structs
grupo[10];

void alta();

int main (){

    int option = 0;
    do{
	    printf("Fundamentos de Programacion\n");
	    printf("Bienvenida a la Practica 5\n");
	    printf("Este es el menu del programa elija la opcion que desee utilizar\n");
	    printf("1\t- Dar de alta a un Alumno\n");
	    printf("2\t- Mostrar Alumnos \n");
	    printf("3\t- Salir \n");
	    scanf("%d", &option);
	    switch (option)
	    {
	    case 1:
	        alta();
	        break;
	    case 2:
	        mostrar();
	        break;
	    
	    default:
	        break;
	    }
	}while(option != 3);
    return 0;
}

void alta(){
	int i, j;
    do{
        int count=0;
        printf("Para dar de alta a un alumno ingrese sus datos\n");
        printf("Nombre:");
        scanf("%s",grupo[count].name);
        printf("boleta:");
        scanf("%i",&grupo[count].id);
        printf("grupo:");
        scanf("%s",grupo[count].group);
        printf("Cuantas materias deesea agregar a este alumno\n");        
        scanf("%d",&x);
        for (i = 0; i < x; i++){
            printf("Ingrerse los datos de la materia\n");
            printf("Nombre de la materia:\n");
            scanf("%s",grupo[(count)].asubject[i].materia);
            printf("Nombre del profesor/a:\n");
            scanf("%s",grupo[(count)].asubject[i].profesor);
            printf("Ingrerse el horario:\n");
            scanf("%s",grupo[(count)].asubject[i].horario);
            printf("Ingrese las calificaicones del parcial:\n");
            grupo[count].asubject[i].final = 0;
            for (j = 0; j < 3; j++)  //***Debes de recorrer las calificaciones con otro indice diferente de i. Puse a j como indice
            {
                scanf("%d",&grupo[(count)].asubject[i].calificacion[j]);
                grupo[count].asubject[i].final += grupo[count].asubject[i].calificacion[j];
            }
            printf("promedio final = %d \n",(grupo[count].asubject[i].final)/3);
        }
        int con =0;
        printf("Deseas agregar otro alumno\n");
        printf("1\tSi\n");
        printf("2\tNo\n");
        scanf("%d",&con);
        if (con == 2)
        {
            flag=0;
        }else{
            flag=1;
            
        }
        count++;
        
    } while (flag);
    //Para aceder a los campos se utiliza el selector ->
    //main();
}

void mostrar(){
    
    int count = 0;
    printf("Nombre: %s\n", grupo[count].name);
    printf("boleta: %d\n", grupo[count].id);
    printf("grupo: %s\n", grupo[count].group);
    for (int i = 0; i < 3; i++)
    {
        printf("Materia: %s\n",grupo[count].asubject[i].materia);
        printf("Profesor: %s\n",grupo[count].asubject[i].profesor);
        printf("Horario: %s\n",grupo[count].asubject[i].horario);
        for (int j = 0; j < 3; j++)
        {
            printf("Calificacion del %d parcial: %d\n",j++,grupo[count].asubject[i].calificacion[j]);
            printf("Promedio final: %d\n",(grupo[count].asubject[i].final)/3);
        }
    }
    count++;
    return 0 ;
    

}
