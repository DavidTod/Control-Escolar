#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


typedef struct Alumno{
        
        char Nombre[31];
        char AP[31];
        char AM[31];
        int  Edad, Telefono,CURP, Grado;
        char Direccion[50];


           }; 
    Alumno RegAdmi;
  
   
void RegAlumno(){

     char Desea;
      do{
        system("cls");
        printf("ALTA DE ALUMNOS\n");
        printf ("Proporciona los datos del alumno\n");
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
        scanf("%d", RegAdmi.CURP);
        printf ("\nGrado: ");
        scanf ("%d", RegAdmi.Grado);
        
        system("cls");
        printf("DESEA PROCESAR OTRO USUARIO (s/n)?: \n");
        fflush(stdin);
        Desea=getchar();
        
}while(Desea == 's');
}
