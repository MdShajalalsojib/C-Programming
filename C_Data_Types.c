#include <stdio.h>

int main() {

  int items = 55;
  float cost_per_item = 8.88;
  float total_cost = items * cost_per_item;
  char currency = '$';


  printf("Number of items: %d\n", items);
  printf("Cost per item: %.2f %c\n", cost_per_item, currency);
  printf("Total cost = %.2f %c\n", total_cost, currency);

  return 0;
}
