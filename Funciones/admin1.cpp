//Funcion para Administrar a los Usuarios
#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void Admin(){
    
	int opc;
	do
	{   //Menu del Administrador
		system("cls");
		printf("1. Alta Alumno \n");
		printf("2. Baja Alumno\n");
		printf("3. Modificar Alumno\n");
		printf("4. Informacion del Alumno\n");
		printf("5. Asignacion de Horarios\n");
		printf("6. <- Regresar\n");
		printf("Opcion:");
		scanf("%d",&opc);
        switch (opc){
            case 1:
                //Funcion Crear
                
                //RegUsuarios();
                break;
                
            case 2:
                //Funcion Eliminar
                //BajasU();
                break;
                
            case 3:
                //Funcion Modificar
                
               // ModUsuario();
                break;
                
            case 4:
                //Funcion Ver Informacion
                
                //CatalogoU();
                
                break;
            
            case 5:
                 //Funcion Asigna Horario
                
                //Horario();
                
                break;
        }
	} while (opc !=6);
	
    
}
