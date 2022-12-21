#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int guess=0,a,numg,dd1,dd,b;
    srand(time(0));
    
    printf("Enter the lower limit:-");
    scanf("%d",&dd);
    
    printf("Enter the upper limit:-");
    scanf("%d",&dd1);
    
    a=rand()%dd1 + dd;

    // printf("The number is %d\n",a);

    do{
        printf("Enter the number:-\n");
        scanf("%d",&b);
        if (b>a){
            printf("%d is greater than the hidden number!\n",b);
        }
        else if (b<a){
            printf("%d is smaller than the hidden number!\n",b);
        }
        else {
            printf("Congrets, YOU WON! \nThe Hidden number = %d\n",a);
        }
        guess++;
    }while(b!=a);
    printf("No. of attempt taken = %d",guess);
    getch();
    return 0;
}