#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
  typedef struct Admin{
	int numero, edad, i, n;
	char nombre[31];
	float estatura, peso;
 }; 

int main(){
    

    char desea;

Admin RegAdmin;

do {
printf("Numero: ");
scanf ("%d", &RegAdmin.nombre);
printf("Dame nombre: ");
fflush (stdin);
gets (RegPersona.nombre);
printf("Dame edad: ");
scanf ("%d", &RegPersona.edad);
printf("Dame estatura: ");
scanf ("%f", &RegPersona.estatura);
printf("Dame peso: ");
scanf ("%f", &RegPersona.peso);
system ("cls");


printf ("Clave: %d \n", RegPersona.numero);
printf ("Nombre: %s \n", RegPersona.nombre);
printf ("Edad: %d \n", RegPersona.edad);
printf ("Estatura: %.2f \n", RegPersona.estatura);
printf ("Peso: %.2f \n", RegPersona.peso);	


printf ("Desea procesar otro empleado? S---N \n");
fflush (stdin);
desea=getchar();

}while(desea == 's');
	
  return 0;
}
