#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "EDPila.h"

//10101   12345
void main(){
    int bandera=1;
    char ElemCopia,ElemNombre;
    
    TPila Nombre;
    TPila Auxiliar;
    TPila CopiaNombre;
    
    CrearPila(&Nombre,sizeof(ElemNombre));
    CrearPila(&Auxiliar,sizeof(ElemNombre));
    CrearPila(&CopiaNombre,sizeof(ElemNombre));
    
    ElemNombre='h';
    Apilar(&Nombre,&ElemNombre);
    Apilar(&Auxiliar,&ElemNombre);
    ElemNombre='a';
	Apilar(&Nombre,&ElemNombre);
	Apilar(&Auxiliar,&ElemNombre);
	ElemNombre='n';
	Apilar(&Nombre,&ElemNombre);
	Apilar(&Auxiliar,&ElemNombre);
	ElemNombre='n';
	Apilar(&Nombre,&ElemNombre);
	Apilar(&Auxiliar,&ElemNombre);
	ElemNombre='a';
	Apilar(&Nombre,&ElemNombre);
	Apilar(&Auxiliar,&ElemNombre);
    ElemNombre='h';
    Apilar(&Nombre,&ElemNombre);
    Apilar(&Auxiliar,&ElemNombre);
	
	Desapilar(&Auxiliar, &ElemCopia);
	Apilar(&CopiaNombre,&ElemCopia);
	printf("%c\n", ElemCopia);
	Desapilar(&Auxiliar, &ElemCopia);
	Apilar(&CopiaNombre,&ElemCopia);
	printf("%c\n", ElemCopia);
	Desapilar(&Auxiliar, &ElemCopia);
	Apilar(&CopiaNombre,&ElemCopia);
	printf("%c\n", ElemCopia);
	Desapilar(&Auxiliar, &ElemCopia);
	Apilar(&CopiaNombre,&ElemCopia);
	printf("%c\n", ElemCopia);
	Desapilar(&Auxiliar, &ElemCopia);
	Apilar(&CopiaNombre,&ElemCopia);
    printf("%c\n", ElemCopia);
	Desapilar(&Auxiliar, &ElemCopia);
	Apilar(&CopiaNombre,&ElemCopia);
    printf("%c\n", ElemCopia);

    while(bandera==1 && PilaVacia(Nombre)!=1){
        Desapilar(&Nombre, &ElemNombre);
        Desapilar(&CopiaNombre, &ElemCopia);
        
        if(ElemNombre!=ElemCopia){
               bandera = 0;
        }
    }
    

    if(bandera==0){
        printf("No es palindromo\n");
    }
    else{
        printf("Si es un palindromo\n");
    }

}
