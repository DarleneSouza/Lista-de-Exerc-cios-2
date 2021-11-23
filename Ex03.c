/*3.  Escreva  um  programa  que  leia  ou  gere  um  vetor  de  N  elementos  inteiros. 
A  seguir,  conte  quantos  valores impares  existem  no  vetor.  Apresente  o  vetor  e  a  quantidade  de  impares  no  final */
#include<stdio.h>
int main(){
	int N,i;
	scanf("%d",&N);
	int vet[N],qtd_imp=0;
	for(i=0;i<N;i++){
		scanf("%d",&vet[i]);
		if(vet[i]%2!=0){
			qtd_imp++;
		}
	}
	for(i=0;i<N;i++){
		printf("%d|",vet[i]);
	}
	printf("\nA quantidade de impares e: %d",qtd_imp);
	return 0;
}
