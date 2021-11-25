#include <stdio.h>
#include <string.h>

char tem[30];
int temp[30];
int op=0;
flag=0;


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
grupo[10],*ptrgroup;

struct Alumno *buscar(struct Alumno *ap);
int main (){

    int option = 0;
    printf("Fundamentos de Programacion\n");
    printf("Bienvenida a la Practica 5\n");
    printf("Este es el menu del programa elija la opcion que desee utilizar\n");
    printf("1\t- Dar de alta a un Alumno\n");
    printf("2\t- Consultar alumnos \n");
    printf("3\t- Modificar algun Alumno \n");
    printf("4\t- Dar de baja a un Alumno \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        alta();
        break;
    case 2:
        baja();
        break;
    case 3:
        //consulta();
        break;
    case 4:
        //edit();
        break;
    
    default:
        break;
    }

    return 0;
};

void alta(){

    do{
        int count=0;
        printf("Para dar de alta a un alumno ingrese sus datos\n");
        printf("Nombre:");
        scanf("%s",grupo[(0+count)].name);
        printf("boleta:");
        scanf("%i",&grupo[(0+count)].id);
        printf("grupo:");
        scanf("%s",grupo[(0+count)].group);
        printf("Cuantas materias deesea agregar a este alumno\n");        
        scanf("%d",&x);
        for (int i = 0; i < x; i++){
            printf("Ingrerse los datos de la materia\n");
            printf("Nombre de la materia:\n");
            scanf("%s",grupo[(0+count)].asubject[i].materia);
            printf("Nombre del profesor/a:\n");
            scanf("%s",grupo[(0+count)].asubject[i].profesor);
            printf("Ingrerse el horario:\n");
            scanf("%s",grupo[(0+count)].asubject[i].horario);
            printf("Ingrese las calificaicones del parcial:\n");
            for (int i = 0; i < 3; i++)
            {
                scanf("%d",&grupo[(0+count)].asubject[i].calificacion[i]);
                grupo[(0+count)].asubject[i].final= grupo[(0+count)].asubject[i].calificacion[i]+grupo[(0+count)].asubject[i].final;
            }
            printf("promedio final = %d \n",(grupo[0].asubject[i].final)/3);
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
    main();
}

void consulta(){

    /*printf("Elija una opcion para buscar al alumno\n1)Nombre\n2)Numero de Boleta\n");
    scanf("d",&op);
    switch (op)
    {
    case 1:*/
        printf("Ingrese Nombre Completo (en mayusculas)\n");
		getchar();
		gets(tem);
		ptrgroup=buscar(ptrgroup);
		flag=0;
        //break;
    /*case 2:
        printf("Ingrese Numero de Boleta\n");
        getint();
		gets(temp);
		ptrgroup=buscar(ptrgroup);
		flag=0;
        break;*/
    
    /*default:
        break;
    }*/
    printf("Estos son los datos del alumno %s \n", ptrgroup->name);
    printf("Boleta: %d\n", ptrgroup->id);
    printf("Grupo: %s\n", ptrgroup->group);
    for (int i = 0; i < 3; i++)
    {
        printf("Materia: %s\n", ptrgroup->asubject[i].materia);
        printf("profesor: %s\n", ptrgroup->asubject[i].profesor);
        printf(": %s\n", ptrgroup->asubject[i].horario);
        printf("Materia: %n \n", &ptrgroup->asubject[i].final);
        
    }
    

};

struct Alumno *buscar(struct Alumno *ap){

    //if (op==1){
        while (strcmp(tem,(*ap).name)!=0){
            ap++;
        }
        
    /*}else
        while (strcmp(temp,(*ap).id)!=0){
            ap++;
        }*/

    return(ap);

}