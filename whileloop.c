/*#include<stdio.h>
int main(){
    //print numbers from 1 to 10
   int i = 1;
   while(i <= 10) {
    printf("%d\n", i);
    ++i;
   }
   return 0;
}*/
#include<stdio.h>
int main(){
  int  i=0, n;
  printf("Enter the number : ");
  scanf("%d",&n);
  while(i<=n){
    printf("%d\n",i);
    ++i;
  }
  return 0;
}
