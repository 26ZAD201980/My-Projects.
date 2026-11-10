#include<stdio.h>
int main (){

    int height;
    int age;
    int hasAdult;
    int medicalClearance;
    int hasVipPass;

    printf("Enter height(in inches):");
    scanf ("%d",&height);
    printf("Enter age:");
    scanf("%d",&age);
    printf("Has adult?(1/10):");
    scanf("%d",&hasAdult);
    printf("Has medical clearance?(1\10):");
    scanf("%d",&medicalClearance);
    printf("Has Vip pass?(1\10):");
    scanf("%d",&hasVipPass);

    int canRide=(height>=48)&&
        (age>=12||hasAdult)&&
        (age<=65||medicalClearance)||
        hasVipPass;

        if(canRide){
            printf("You can ride!\n");
        }else{
            prinft("Sorry,you cannot ride.\n");
        }
        return 0;
    }