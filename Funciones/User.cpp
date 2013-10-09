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
        
        //ID
        fflush(stdin);
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

void Lista(){ //FUNCION LISTA ALUMNOS
    Usuario = fopen("Archivos\\Usuarios.dat","rb");
    system("cls");
    printf("º------------------------------------------------------------------º\n");
    printf("º                      LISTA DE ALUMNOS                            º\n");
    printf("º------------------------------------------------------------------º\n");
    fread(&RegAdmi, sizeof(RegAdmi),1,Usuario);
    printf("º------------------------------------------------------------------º\n");
    printf("ºAPELLIDO P.   APELLIDO M.    NOMBRE    DIRECCION       GRADO    IDº\n");
    printf("º------------------------------------------------------------------º\n");
    while(!feof(Usuario)==1){
        if (RegAdmi.Activo == 1)
        {
    printf("º------------------------------------------------------------------º\n");
    printf("º %-10s    %-10s     %-3s     %-4s   %-5d  %-80d º\n",RegAdmi.AP, RegAdmi.AM, RegAdmi.Nombre, RegAdmi.Direccion, RegAdmi.Grado, RegAdmi.Id );
    printf("º------------------------------------------------------------------º\n");
        }   
        fread(&RegAdmi, sizeof(RegAdmi),1,Usuario);
    }
    fclose(Usuario);
    system("PAUSE");
    
}//FIN FUNCION LISTA ALUMNOS

void Modificar(){ //FUNCION MODIFICAR
     
     int opc,opc2,j;
    char desea;
    do{
          printf ("¿Que dato deseas modificar?");
        system("cls");
        printf("\n1.Apellido Paterno: ");
        printf("\n2.Apellido Materno: ");
        printf("\n3.Nombre: ");
        printf("\n4.Edad: ");
        printf("\n5.Telefono: ");
        printf("\n6.Direccion: ");
        printf ("\n7.CURP: ");
        printf ("\n8.Grado: ");
        fflush(stdin);
        scanf ("%d", &opc);
        switch (opc){
        case 1:
             printf ("\nApellido Paterno");
             fflush(stdin);
             gets(RegAdmi.AP);
             system ("PAUSE");
             break;
        case 2:
             printf ("\nApellido Materno");
             fflush(stdin);
              gets(RegAdmi.AM);
              system ("PAUSE");
             break;
        case 3:
             printf ("\nNombre");
             fflush(stdin);
             gets (RegAdmi.Nombre);
             system ("PAUSE");
             break;
        case 4:
             printf ("\Edad");
             fflush(stdin);
             scanf("%d",&RegAdmi.Edad);
             system ("PAUSE");
             break;
        case 5:
             printf ("\nTelefono");
             fflush(stdin);
             scanf("%d",&RegAdmi.Telefono);
             system ("PAUSE");
             break;
        case 6:
             printf ("\nDireccion");
             fflush(stdin);
             gets(RegAdmi.Direccion);
             system ("PAUSE");
             break;
        case 7:
             printf ("\nCURP");
             fflush(stdin);
             scanf("%d", RegAdmi.CURP);
             system ("PAUSE");
             break;
        case 8:
             printf ("\nGrado");
             fflush(stdin);
             scanf ("%d", RegAdmi.Grado);
             system ("PAUSE");
             break;
             }
             
             } while (opc2 !=6);
                fseek(Usuario, sizeof(RegAdmi)*(j),0);
				fwrite(&RegAdmi, sizeof(RegAdmi),1,Usuario);
				printf("Archivo Modificado\n");
				fflush(stdin);
				system("PAUSE");
				break;
            }else{
                printf("El Nombre %s NO se modifico\n",RegAdmi.Nombre);
                system("PAUSE");
                break;
                
            }
        }
        
        // if (i>opc)//Revisar
        // {
        // 	printf("La Clave no existe\n");
        // 	system("PAUSE");
        // 	break;
        // }//Ultimo IF
        i++;
        fflush(stdin);
        fread(&RegAdmi, sizeof(RegAdmi),1,Usuario);
        
 	}
 	
 	 	fclose(Usuario);
     
     }
     


