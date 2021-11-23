/*14. Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, os
tempos registrados em cada volta. Fazer um programa em C para ler os tempos das N voltas, sendo que os
tempos devem ser armazenados em um vetor e após a entrada de todos os tempos de um piloto deve-se
apresentar o vetor juntamente com:
	• melhor tempo;
	• a volta em que o melhor tempo ocorreu;
	• tempo médio das N voltas para cada piloto;*/
#include<stdio.h>
int main(){
	int N;
	printf("Digite o numero de voltas:\n");
	scanf("%d",&N);
	int i,tempo[N],melhor_tempo,melhor_volta,tempo_medio,soma=0;
	printf("Digite o tempo de cada volta:\n");
	for(i=0;i<N;i++){
		scanf("%d",&tempo[i]);
	}
	melhor_tempo=tempo[0];
	for(i=0;i<N;i++){
		if(tempo[i]<=melhor_tempo){
			melhor_tempo=tempo[i];
			melhor_volta=i+1;
		}
		soma=soma+tempo[i];
	}
	tempo_medio=soma/N;
	printf("O melhor tempo: %d\nA volta em que o melhor tempo ocorreu: %d\nO tempo medio das N voltas para cada piloto: %d\n",melhor_tempo,melhor_volta,tempo_medio);
	return 0;
}
