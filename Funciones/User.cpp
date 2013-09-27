#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


typedef struct Alumno{
    
    //Variables Estructura
    char Nombre[31];
    char AP[31];
    char AM[31];
    int  Edad;
    char Direccion[50];
    int Telefono;
    char CURP;
    int Grado;
    int Id;
    int Activo;
    
    
};
//Variables
Alumno RegAdmi;
FILE *Usuario;
FILE *ID2;
int id2;


void RegAlumno(){ //FUNCION REGISTRAR ALUMNOS
    
    system("cls");
    //Variables
    char Desea;
    //Instrucciones Archivos
    Usuario= fopen("Archivos\\Usuarios.dat","a+b");
    ID2= fopen("Archivos\\ID2.dat","r+b");
    fread(&id2, sizeof(id2), 1, ID2);
    //Pedir datos del alumno
    do{
        system("cls");
        printf("º-----------------------º\n");
        printf("º << ALTA DE ALUMNOS >> º\n");
        printf("º-----------------------º\n");
        
        printf ("\nPor favor proporcione los datos del alumno a registrar\n\n");
        printf("---------------------------------------------------------\n");
        printf("\nApellido Paterno: ");
        fflush(stdin);
        gets(RegAdmi.AP);
        printf("\nApellido Materno: ");
        gets(RegAdmi.AM);
        printf ("\nNombre: ");
        gets (RegAdmi.Nombre);
        printf("\nEdad: ");
        scanf("%d",&RegAdmi.Edad);
        printf("\nTelefono: ");
        scanf("%d",&RegAdmi.Telefono);
        printf("\nDireccion: ");
        fflush(stdin);
        gets(RegAdmi.Direccion);
        printf ("\nCURP: ");
        fflush(stdin);
        scanf("%d",&RegAdmi.CURP);
        fflush(stdin);
        printf("\nGrado: ");
        scanf("%d",&RegAdmi.Grado);
        
        fflush(stdin);
        //ID
        RegAdmi.Id = id2++;
        RegAdmi.Activo = 1;

        
        printf("\nEl ID del Alumno(a) %s es: %d\n\n", RegAdmi.Nombre,RegAdmi.Id);
        
        printf(" *ES IMPORTANTE QUE EL ALUMNO RECUERDE SU ID         \n");
        printf("  YA QUE CON ESTE PODRA ACCEDER AL PORTAL DE ALUMNOS* \n\n");

        
        system("PAUSE");
        //GUARDAR REGISTRO
        fflush(stdin);
        fwrite(&RegAdmi, sizeof(RegAdmi),1,Usuario);
        id2= id2*1;
        //GUARDAR ID
        fseek(ID2, sizeof(id2)*0,0);
              fwrite(&id2, sizeof(id2),1,ID2);
              
              //OTRO REGISTRO?
              system("cls");
              printf("DESEA PROCESAR OTRA ALTA ? (teclee 's' para si o 'n' para no): ");
              fflush(stdin);
              Desea=getchar();
              fread(&id2, sizeof(id2),0,ID2);
              
              }while(Desea == 's');
              
              //FIN ARCHIVOS
              fclose(Usuario);
              fclose(ID2);
              
}//FIN FUNCION REGISTRO
