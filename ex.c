#include <stdio.h>


void remplirTableau(int tableau[],int taille){
int i;
printf("veuiller saisez les nombre des tablaux :");
 for(i=0;i<10;i++){
printf("T[%d]",i+1);
scanf("%d",&tableau[i]);
}
}
void afficherTableau(int tableau[],int taille){
int i;
printf("\nveuiller saisez les nombre des tablaux :");
 for(i=0;i<10;i++){
printf("\nT[%d]=%d\n",i+1,tableau[i]);
}
}

void trierTableau(int Tableau[],int Taille){
int i,j,tmp;

for(i=0;i<Taille;i++){
	for(j=i+1;j<Taille;j++){
		if(Tableau[i]>Tableau[j]){
			tmp=Tableau[i];
			Tableau[i]=Tableau[j];
			Tableau[j]=tmp;
}
}


}


}

int main(){
int T[10] ;
int tamp,i,j;
remplirTableau(T,10);
printf("\n***************************************\n");
afficherTableau(T,10);
trierTableau(T,10);
afficherTableau(T,10);
trierTableau(T,10);
return 0;
}
