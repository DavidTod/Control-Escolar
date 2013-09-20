#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "user.cpp"



void Admin(){
//principal

	int opc;
	do
	{
		system("cls");
		printf("1. Crear Usuario\n");
		printf("2. Eliminar Usuario\n");
		printf("3. Modificar Usuario\n");
		printf("4. Catalogo\n");
		printf("5. <- Regresar\n");
		printf("Opcion:");
		scanf("%d",&opc);
	switch (opc){
		case 1:

			RegAlumno();
		break;

		case 2:

			//BajasU();
		break;

		case 3:


		      //ModUsuario();
		break;

		case 4:

			//CatalogoU();

		break;
	}
	} while (opc !=5);
	

}

