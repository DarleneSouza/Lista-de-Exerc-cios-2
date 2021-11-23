/*4.  Escreva  um  programa  que  leia  ou  gere  um  vetor  de  N  elementos  inteiros.
A  seguir,  conte  quantos  valores pares  existem  no  vetor.  Apresente  a  média dos  valores  pares. */
#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int i,vet[N],qtd_pares=0,soma=0,media;
	for(i=0;i<N;i++){
		scanf("%d",&vet[i]);
		if(vet[i]%2==0){
			qtd_pares++;
			soma=soma+vet[i];
		}
	}
	media=soma/qtd_pares;
	printf("\nA media dos valores pares e: %d",media);
	return 0;
}
