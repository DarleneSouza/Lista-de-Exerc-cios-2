/*10.  Receber  um  vetor  de  N  posições  do  tipo  inteiro  verificar  quantas  vezes  um  dado  valor  informado  pelo usuário  
se  encontra no  vetor.  Apresente  também  todos elementos do  vetor. */
#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int i,vet[N],qtd_vezes=0,dado;
	for(i=0;i<N;i++){
		scanf("%d",&vet[i]);
	}
	printf("Informe um dado valor pelo usuario que sera encontrado: ");
	scanf("%d",&dado);
	for(i=0;i<N;i++){
		if(vet[i]==dado){
			qtd_vezes++;
		}
		printf("%d|",vet[i]);
	}
	printf("\nA quantidade de veses encontrado no vetor: %d\n",qtd_vezes);
	return 0;
}
