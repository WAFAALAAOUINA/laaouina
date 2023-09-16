  #include <stdio.h>

float  afficherlasurfaceducercle (int rayon){
float Pi=3.14;

float S = rayon*rayon*Pi;

	return S;
}

int main(){
float Surf  ;
	float rayon;
	printf("ENter le rayon");scanf("%f",&rayon);
	Surf =afficherlasurfaceducercle(rayon);
	printf("Surface est : %f",Surf);

return 0;
}
