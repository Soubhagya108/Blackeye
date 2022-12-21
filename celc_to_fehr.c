#include<stdio.h>
#include<conio.h>

int main()
{
    int c;
    printf("Enter the value of temperature in celcius : \n");
    scanf("%d",&c);

    float f=c*1.8;
    printf("The value in Fahrenheit : %f",f+32);
    return 0;
}


// #include<stdio.h>
// #include<conio.h>
// float temp(float x);
// int main()
// {
//     float a;
//     printf("Enter the value in celcius:- ");
//     scanf("%f",&a);
//     printf("The temperature in farenheit = %.3f",temp(a));
//     return 0;
// }

// float temp(float x){
//     float y;
//     y=x*1.8;
//     return y+32;
// }