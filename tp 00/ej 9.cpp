/*

Un programa en C, contiene la siguiente declaraci�n: 
Char *pron[5]={�Yo�, �Tu�, �El�, �Nosotros�, �Ellos�};
 a)�Cu�l es el significado de pron? 
 b)�Qu� significa (pron+2)? 
 c)�Qu� significa *(pron+2)? 
 
 Respuestas
 a) se muestra la primer direccion de memoria del array
 b) se muestra la posicion de memomoria numero 3 del array
 c)significa que se va mostar el contenido de la posicion de memoria 3



*/

#include <iostream>
using namespace std;
int main(){
char *pron[5]={"yo", "tu", "el", "nosotros", "ellos"};	
cout<<pron<<endl;	
cout<<(pron+2)<<endl;	
cout<<*(pron+2)<<endl;	
}

