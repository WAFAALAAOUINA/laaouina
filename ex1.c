#include <stdio.h>
int main(){
char operateur ;
int num1;num2;result;

while (1) {
        printf("Entrez un opérateur (+, -, *, /) ou appuyez sur x pour quitter : ");
        scanf(" %c", &operateur);
if ("operateur == 'x' || operateur 'X'");
 break; // Sortir de la boucle si l'utilisateur presse "x"
printf("entrer les deux nombre :");
scanf("%lf%lf:&num1,num2");

        switch (operateur) {
            case '+':
                resultat = num1 + num2;
               printf("%.1lf + %.1lf = %1.lf\n", num1, num2, resultat);
                break;
            case '-':
                resultat = num1 - num2;
                printf("%.1lf - %.1lf = %.1lf\n", num1, num2, resultat);
                break;
            case '*':
                resultat = num1 * num2;
                printf("%.1lf * %.1lf = %.1lf\n", num1, num2, resultat);
                break;
            case '/':
                if (num2 != 0) {
                    resultat = num1 / num2;
                    printf("%.1lf / %.1lf = %.1lf\n", num1, num2, resultat);
                } else {
                    printf("La division par zéro n'est pas autorisée.\n");
                }
                break;
            default:
                printf("Opérateur invalide. Veuillez entrer +, -, *, ou /.\n");
        }
    }

    return 0;
}
