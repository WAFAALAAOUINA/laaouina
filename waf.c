#include <stdio.h>

float calculezlairedetriangle(int b,int h){

float A = (b*h)/2;


return A;
}



int main(){
int b ;
int h;
float A ;
printf("entrer la base");
scanf("%d",&b);
printf("entrer la hauteur");

scanf("%d",&h);
A = calculezlairedetriangle(b,h);
printf("l'aire est : %f",A);




return 0;
};

