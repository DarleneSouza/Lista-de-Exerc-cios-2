/*6.  Escreve  um  programa  que  sorteio,  aleatoriamente,  N  n�meros e  armazene  estes  em  um  vetor. 
Em  seguida,  o usu�rio  digita  um  n�mero  e  seu  programa  em  C  deve  acusar  se  o  n�mero  digitado  est�  no  vetor  ou  n�o.
Se estiver,  diga a  posi��o  que  est�. */
#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int i,vet[N],posicao=-1,num;
	srand(time(NULL));//garante aletoriadade
	for(i=0;i<N;i++){
		vet[i]=rand()%N;//gera o numero aleatorio
	}
	printf("Digite um numero: ");
	scanf("%d",&num);
	for(i=0;i<N;i++){
		if(vet[i]==num){
			posicao=i;
		}
	}
	if(posicao!=-1){
		printf("O numero esta na posicao: %d\n",posicao);
	}else{
		printf("O numero nao esta no vetor");
	}
	return 0;
	
}
