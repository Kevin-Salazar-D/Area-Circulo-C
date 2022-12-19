#include<stdio.h>
#include<stdlib.h>

int main(){
    float radio, area;
    const float pi = 3.1416;

    printf("Ingresa el radio del circulo ");
    scanf("%f",&radio);

    area = radio*radio*pi;

    printf("El area del circulo es ""%f \n",area);
    system("pause");
    return 0;
}
