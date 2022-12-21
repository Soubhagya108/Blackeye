#include<stdio.h>
#include<conio.h>
int main()
{   int a,l=0,j=1,i=10;
    printf("THE CALENDER FOR THE YEAR 2023\n");
    printf("Enter the No. of month:-");
    scanf("%d",&a);

    printf("S     M      T     W     T    F     S\n");

    if (a==1){
    while(i<32){
        while(j<10){
            printf("0%d    ",j);
            if (j==7){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i%7==0){
           printf("\n");
        }
        i++;
        }
    }

    else if(a==2){
        while(i<29){
        while(j<10){
            while(l<1){
            printf("00    00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==4){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==11){
           printf("\n");
        }
        if (i==18){
           printf("\n");
        }
        if (i==25){
           printf("\n");
        }
        i++;
        }

    }

    else if(a==3){
        while(i<32){
        while(j<10){
            while(l<1){
            printf("00    00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==4){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==11){
           printf("\n");
        }
        if (i==18){
           printf("\n");
        }
        if (i==25){
           printf("\n");
        }
        i++;
        }

    }

    else if(a==4){
        while(i<31){
        while(j<10){
            while(l<1){
            printf("00    00    00    00    00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==1 || j==8){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==15){
           printf("\n");
        }
        if (i==22){
           printf("\n");
        }
        if (i==29){
           printf("\n");
        }
        i++;
        }

    }

    else if(a==5){
        while(i<32){
        while(j<10){
            while(l<1){
            printf("00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==6){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==13){
           printf("\n");
        }
        if (i==20){
           printf("\n");
        }
        if (i==27){
           printf("\n");
        }
        i++;
        }

    }

    else if(a==6){
        while(i<31){
        while(j<10){
            while(l<1){
            printf("00    00    00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==3){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==10){
           printf("\n");
        }
        if (i==17){
           printf("\n");
        }
        if (i==24){
           printf("\n");
        }
        i++;
        }

    }

    else if(a==7){
        while(i<32){
        while(j<10){
            while(l<1){
            printf("00    00    00    00    00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==1 || j==8){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==8){
           printf("\n");
        }
        if (i==15){
           printf("\n");
        }
        if (i==22){
           printf("\n");
        }
        if (i==29){
            printf("\n");
        }
        i++;
        }

    }

    else if(a==8){
        while(i<32){
        while(j<10){
            while(l<1){
            printf("00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==5){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==12){
           printf("\n");
        }
        if (i==19){
           printf("\n");
        }
        if (i==26){
           printf("\n");
        }
        i++;
        }

    }

    else if(a==9){
        while(i<31){
        while(j<10){
            while(l<1){
            printf("00    00    00    00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==2 || j==9){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==16){
           printf("\n");
        }
        if (i==23){
           printf("\n");
        }
        i++;
        }

    }

    if (a==10){
    while(i<32){
        while(j<10){
            printf("0%d    ",j);
            if (j==7){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i%7==0){
           printf("\n");
        }
        i++;
        }
    }

    else if(a==11){
        while(i<31){
        while(j<10){
            while(l<1){
            printf("00    00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==4){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==11){
           printf("\n");
        }
        if (i==18){
           printf("\n");
        }
        if (i==25){
           printf("\n");
        }
        i++;
        }

    }

    else if(a==12){
        while(i<32){
        while(j<10){
            while(l<1){
            printf("00    00    00    00    00    ");
            l++;
            }
            printf("0%d    ",j);
            if (j==2 || j==9){
            printf("\n");
            }
            j++;
        }
        printf("%d    ",i);

        if (i==16){
           printf("\n");
        }
        if (i==23){
           printf("\n");
        }
        if (i==30){
           printf("\n");
        }
        i++;
        }


    }
    getch();
    return 0;
}