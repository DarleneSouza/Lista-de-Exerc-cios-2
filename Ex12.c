/*12.  Tentando  descobrir  se  um  dado  era  viciado,  um  dono  de  cassino  honesto  o  lançou  N  vezes.
Dados  os  n resultados dos lançamentos  que  devem  ser armazenados em  um  vetor,  determinar o  número  de  ocorrências de  cada face.*/
#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int i,vet[N],face1=0,face2=0,face3=0,face4=0,face5=0,face6=0;
	for(i=0;i<N;i++){
		scanf("%d",&vet[i]);
		switch(vet[i]){
			case 1:
				face1++;
				break;
			case 2:
				face2++;
				break;
			case 3:
				face3++;
				break;
			case 4:
				face4++;
				break;
			case 5:
				face5++;
				break;
			case 6:
				face6++;
				break;
		}
	}
	printf("face1: %d\nface2: %d\nface3: %d\nface4: %d\nface5: %d\nface6: %d\n",face1,face2,face3,face4,face5,face6);
	return 0;
}
