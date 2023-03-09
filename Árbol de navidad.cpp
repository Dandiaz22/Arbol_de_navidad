/*
Date 05/03/2023
Author Daniel Alberto Diaz Balbuena
*/



/*
Incluimos la libreria standard imput-output para poder meter datos y nos devuelva en pantalla ya compilado el programa.
*/
#include <stdio.h>



/* 
Funcion principal main, declaramos variables de tipo entero (int) que nos serviran para almacenar los valores y utilizarlos.
*/
int main()
{
   int i, e, h, t;




/* 
Llamamos a la funcion printf para imprimir en pantalla y pedir la altura del arbol.
Con la funcion scanf se almacena el tipo de dato entero en la variable h.
*/
   printf("Que altura quieres que tenga en arbol? \n");
   scanf ("%d", &h);





/*Follaje del arbol de navidad
Utilizamos un ciclo for para asignar valor 1 a la variable i, posteriormente condicionar a si es <= al valor anteriormente tecleado y guardado en h, incrementara su valor.
El siguiente for asigna un valor 1 a la variable e y si esta es <= h-i, imprimira un espacio (con la finalidad que se creen los espacios para el arbol).
El siguiente ciclo for permite colocar * como parte del follaje al cumplir con las condiciones, finalmente se da un salto de linea y se repite hasta agotar el ciclo.
*/

   for(i=1;i<=h;i++)
   {
       for (e=1;e<=h-i;e++)
       printf(" ");
       
	   for (e=1; e<=(2*i-1);e++)
       printf("*");
       
       printf("\n");
   }
   
   
/*Tronco del arbol de navidad
El ciclo for para imprimir el tronco del arbol nos condiciona a que solamente si el valor h-1 es mayor que t=0 se impriman espacios, con la finalidad de terminar en el centro del arbol. 
Acabando el ciclo de pide imprimir el tronco del arbol con |, una vez llegado al fin del ciclo, culminando en la mitad del arbol.
Termina el codigo y devuelve 0.
*/

	for(t=0; t<h-1; t++){
	printf(" ");}
	
	printf("|\n");
	

    return 0;
    
}
