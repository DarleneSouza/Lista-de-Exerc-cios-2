/*1.  Escreva  um  programa  que  leia  ou  gere  um  vetor  de  N  elementos  inteiros 
(N  deve  ser  informado  pelo  usuário e  o  limite  do  vetor  é  100)  e  apresente  a soma de  seus  elementos.*/
#include<stdio.h>
int main(){
	int soma=0,N,vet[100],i;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&vet[i]);
		soma=soma+vet[i];
	}
	printf("A soma de seus elementos e: %d\n",soma);
	return 0;
}
	 

