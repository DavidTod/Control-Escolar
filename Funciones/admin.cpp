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
		printf("�-----------------------�\n");
		printf("� 1. Alta Alumno        �\n");
		printf("� 2. Baja Alumno        �\n");
		printf("� 3. Modificar Alumno   �\n");
		printf("� 4. Lista de Alumnos   �\n");
		printf("� 5. Horarios           �\n");
		printf("� 6. <- Regresar        �\n");
		printf("�-----------------------�\n");
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

