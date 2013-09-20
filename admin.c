#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    
typedef struct Alumno{
        
        char Nombre[31];
        char AP[31];
        char AM[31];
        int  Edad, Telefono,CURP, Grado;
        char Direccion[50];
       
    FILE *Administrador;
    Alumno RegAdmi;
        //datos de los padres
           }; 
    
  
   
void RegAdmin(){
     char desea;
     
   Administrador = fopen("Archivos\\Administrador.dat","a+b");
     
      do{
     
        printf("ALTA DE ALUMNOS\n");
        printf ("Proporciona los datos del alumno\n");
        printf("Apellido Paterno");
        fflush(stdin);
        gets(RegAdmi.AP);
        printf("\nApellido Materno: ");
        gets(RegAdmi.AM);
        printf ("\nNombre:");
        gets (RegAdmi.Nombre);
        printf("\nEdad: ");
        scanf("%d",&RegAdmi.Edad);
        printf("\nTelefono: ");
        scanf("%d",&RegAdmi.Telefono);
        printf("\nDireccion: ");
        fflush(stdin);
        gets(RegAdmi.Direccion);
        printf ("\nCURP");
        scanf("%d", RegAdmi.CURP);
        printf ("\nGrado");
        scanf ("%d", RegAdmi.Grado);
        

                   
    

  

}

