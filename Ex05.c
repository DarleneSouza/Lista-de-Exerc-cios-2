/*5.  Leia  um  vetor  DNA  de  caracteres  para  receber  as  letras  A,  T,  C  e  G  que  representam  as  bases  do  DNA.  
Este vetor  será  responsável  por  representar  uma  fita  de  um  gene  de  limite  de  50  bases.  
Gere  o  vetor complementar  ao  vetor DNA e  o  apresente  (Lembrando  as  bases  complementares A=T  C=G). */
#include<stdio.h>
int main(){
	int i,tam=4;
	char DNA[tam],complementar[tam];
	for(i=0;i<tam;i++){
		fflush(stdin);
		scanf("%c",&DNA[i]);
		switch(DNA[i]){
			case 'A':
				complementar[i]='T';
				break;
			case 'T':
				complementar[i]='A';
				break;
			case 'C':
				complementar[i]='G';
				break;
			case 'G':
				complementar[i]='C';
				break;
		}
	}
	for(i=0;i<tam;i++){
		printf("%c|",complementar[i]);
	}
	return 0;
}
