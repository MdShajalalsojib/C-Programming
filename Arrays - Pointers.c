 #include <stdio.h>
int main() {
  int x[7] = {10, 21, 31, 12, 61,90,71};
  int* ptr;
  ptr = &x[4]; 
  printf("*ptr = %d \n", *ptr);    
  printf("*(ptr+1) = %d \n", *(ptr+1));  
  printf("*(ptr-1) = %d", *(ptr-1));   

  return 0;
}
