 #include <stdio.h>
int main()
{
  int n;
  printf("Enter the any var : ");
  scanf("%d\n",&n);
  // Notice the use of & before var
  printf("address of var: %p", &n);  
  return 0;
}
