/*9.  Leia  um  vetor  de  caracteres  (limite  100)  utilizando  a  função  gets().  Utilize  a  função  strlen 
(Você  deve  incluir  a biblioteca  string.h)    para  obter  a  quantidade  de  elementos  do  vetor  de  caracteres.
Escreva  o  vetor  lido  em ordem  inversa. */
#include<stdio.h>
#include<string.h>
int main(){
	int i,tam;
	char vet[100];
	fflush(stdin);//limpa buffer do teclado
	gets(vet);//recebe palavra do usuario
	tam=strlen(vet);//armeza o temanho da palavra digitada pelo usuario
	for(i=tam-1;i>=0;i--){//repetição em ordem inversa
		printf("%c",vet[i]);
	}
	printf("\n");
	return 0;
}
