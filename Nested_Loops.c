#include<stdio.h>
int main(){
   int row = 5;
   int column = 4;
   for(int i= 1;i<= row; i++){
    for(int j = 1; j<=column;j++){
        printf("*  ");
    }
    printf("\n");
   }
   return 0;
}
/*
#include<stdio.h>
int main(){
   int weeks=3, days_in_week = 7;
   for(int i = 1;i<=weeks;i++){
    printf("Week: \n",i);
    for(int j = 1;j <= days_in_week;j++){
        //continue if the day is an odd number
        if((j % 2 != 0)){
            continue;
        }
        prontf("    Day: \n",j);
    }
   }
   
}
*\
