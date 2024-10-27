 #include <stdio.h>
int main()
{
   int* pc, n;
   
   n = 22;
   printf("Address of c: %p\n", &n);
   printf("Value of c: %d\n\n", n);  // 22
   
   pc = &n;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   n = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &n);
   printf("Value of c: %d\n\n", n); // 2
   return 0;
}
