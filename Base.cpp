
#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//FUNCIONES EXTERNAS
//#include "Funciones\admin.cpp"
//#include "Funciones\User.cpp"


int main(int argc, char *argv[])
{       
    //VARIABLES
    int opc;
    do
    {
        system("cls");
        //MENU PRINCIPAL

        printf("�-----------------------------------�\n");
        printf("�         <<< Bienvenido >>>        �\n");
        printf("�-----------------------------------�\n");
        printf("� 1.ADMINISTRADOR                   �\n");
        printf("� 2.ALUMNOS                         �\n");
        printf("� 3.SALIR                           �\n");
        printf("�-----------------------------------�\n");
        printf("TECLEE UNA OPCION:");
        scanf("%d",&opc);
        switch (opc){
            case 1: //FUNCION ADMINISTRADOR
                //Admin();
                
                break;
                
            case 2://FUNCION USUARIO
                //User();
                
                break;
        }
    } while (opc != 3);
    
    system("cls");
    system("PAUSE");
    return 0;
}


