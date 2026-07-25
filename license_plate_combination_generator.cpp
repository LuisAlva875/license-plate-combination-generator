#include <stdio.h>
#include <stdlib.h>

struct nodo{
	
	char dato1[6];
	int dato[3];
	
	nodo *sig;
	nodo *ant;
	nodo *sig1;
	nodo *ant1;
};

nodo *primero=NULL;
nodo *ultimo=NULL;
nodo *primero1=NULL;
nodo *ultimo1=NULL;

void numeros(int x, int y, int z, int a, int b, int c);
void letras(int x, int y, int z);
void mostrarArreglo();

main(){

	int n=9;
	
	for(int i=65; i<=90; i++)
	for(int j=65; j<=90; j++)
	for(int k=65; k<=90; k++)
	
	if(i<=j)
	if(j<=k)
	
	for(int a=0; a<=n; a++){
		for(int b=0; b<=n; b++){
			for(int c=0; c<=n; c++){
				if(a<=b){
					if(b<=c){
						numeros(i,j,k,a,b,c);
					}
				}
			}
		}
	}
	mostrarArreglo();
}

void letras(int x, int y, int z){
	
	nodo *nuevo;
	nuevo=(nodo*)malloc(sizeof(nodo));
	nuevo->dato[0]=x;
	nuevo->dato[1]=y;
	nuevo->dato[2]=z;
	
	if(primero==NULL){
		primero=nuevo;
		primero->sig=NULL;
		primero->ant=NULL;
		
	}else
		ultimo->sig=nuevo;
		nuevo->sig=NULL;
		nuevo->ant=ultimo;
		ultimo=nuevo;	
}

void numeros(int x, int y, int z, int a,int b,int c){
	
	nodo *nuevo1;
	nuevo1=(nodo*)malloc(sizeof(nodo));
	nuevo1->dato1[0]=x;
	nuevo1->dato1[1]=y;
	nuevo1->dato1[2]=z;
	nuevo1->dato1[3]=a;
	nuevo1->dato1[4]=b;
	nuevo1->dato1[5]=c;
	
	if(primero1==NULL){
		primero1=nuevo1;
		primero1->sig1=NULL;
		primero1->ant1=NULL;
	
	}else
		ultimo1->sig=nuevo1;
		nuevo1->sig=NULL;
		nuevo1->ant1=ultimo1;
		ultimo1=nuevo1;
}

void mostrarArreglo(){
	
	int c=0; 
	int d=0;
	
	nodo *actual;
	actual=(nodo*)malloc(sizeof(nodo));
	actual=primero1;
	
	if(primero1!=NULL){
		while(actual!=NULL){
			d++;
			c++;
			printf("\n%c %c %c - %d %d %d", actual->dato1[0],actual->dato1[1],actual->dato1[2],actual->dato1[3],actual->dato1[4],actual->dato1[5]);
			actual=actual->sig;
		}
		printf("\n\nExisten %d soluciones",c+d);
	}
}
