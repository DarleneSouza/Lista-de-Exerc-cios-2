/*6.  Escreve  um  programa  que  sorteio,  aleatoriamente,  N  números e  armazene  estes  em  um  vetor. 
Em  seguida,  o usuário  digita  um  número  e  seu  programa  em  C  deve  acusar  se  o  número  digitado  está  no  vetor  ou  não.
Se estiver,  diga a  posição  que  está. */
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
