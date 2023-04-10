#include<stdio.h>
#include<math.h>
int main(){

double a, b, c, r1, r2, d;


printf("Introduzca el valor de a:");
scanf("%lf",&a);

printf("\nIntroduzca el valor de b:");
scanf("%lf",&b);

printf("\nIntroduzca el valor de c:");
scanf("%lf",&c);

d=pow(b,2)-4*a*c;

	if(a==0){

		r1 = -c/b;
		printf("Puede ser un bonomio y entonces")
		printf("\nLa raiz es: %.2f", r1);
	}

	else{

		if(d>=0){
			r1= (-b+sqrt(d))/2*a;
			r2= (-b-sqrt(d))/2*a;


			printf("\n\nLa raiz 1: %.2f\n", r1);
			printf("La raiz 2: %.2f", r2);

		}

			else{

				d=fabs(d);

				r1=-b/2*a;
				r2=sqrt(d)/2*a;


				printf("La raiz 1: %.2f + %.2f\n", r1, r2);

				printf("La raiz 2: %.2f - %.2f", r1, r2);
			}
	}

	return 0;
}
