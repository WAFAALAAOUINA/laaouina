#include <time.h>
#include <stdio.h>
#include <string.h>

	typedef struct{
	int id;                   
    char titre[50];          
    char description[200];      
    char statut[30]; 
    int deadline[3];
	      
}Tache;
int i;
Tache t[100];

void creeuntache(){
 	printf("entrer id :");
	scanf(" %d", &t[i].id);
	printf("entrez le titre :");
	scanf("%s",t[i].titre);
    printf("entrez le statut :");
    scanf("%s",t[i].statut);
    printf("entrez le deadline (jj/mm/aaaa):");
    scanf("%d/%d/%d", &t[i].deadline[0],&t[i].deadline[1],&t[i].deadline[2]);

 }
 
// void ajoutertache() {
	
  //  printf("id:%d",t[i].id);
 //	printf("titre:%s",t[i].titre);
 //	printf("description:%s",t[i].description);
 //	printf("statut:%s",t[i].statut);
//}
 void affichertache(){
 	
	printf("id:%d\n",t[i].id);
 	printf("titre:%s\n",t[i].titre);
 	printf("description:%s\n",t[i].description);
 	printf("statut:%s\n",t[i].statut);
	printf("deadline : %d/%d/%d\n", t[i].deadline[0],t[i].deadline[1],t[i].deadline[2]);

}
 

int main() {
	creeuntache();
	
		affichertache();
		
    
     		
	return 0;
	};
