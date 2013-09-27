#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "user.cpp"



void Admin(){
//Menu Principal Admin

	int opc;
	do
	{
		system("cls");
		printf("º-----------------------º\n");
		printf("º 1. Alta Alumno        º\n");
		printf("º 2. Baja Alumno        º\n");
		printf("º 3. Modificar Alumno   º\n");
		printf("º 4. Lista de Alumnos   º\n");
		printf("º 5. Horarios           º\n");
		printf("º 6. <- Regresar        º\n");
		printf("º-----------------------º\n");
		printf("\nTECLEE UNA OPCION: ");
		scanf("%d",&opc);
		
	switch (opc){
           
		case 1:

			RegAlumno(); //(David)
			
			
		break;

		case 2:

			//BajasU(); (David)
		break;

		case 3:


		      //ModUsuario(); (Danny)
		break;

		case 4:

			//CatalogoU(); (josue)

		break;
		
		case 5:

			//Horario(); 

		break;
	}
	} while (opc !=6);
	

}

