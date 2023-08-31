#include <stdio.h>
int main() {
   int n, coef = 1, s, i, j;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 0; i < n; i++) {
      for (s = 1; s <= n - i; s++)
         printf("  ");
      for (j = 0; j <= i; j++) {
      	if (j == 0 || i == 0)
            coef = 1;
        else
            coef = coef * (i - j + 1) / j;
            printf(" %d ", coef);
      }
      printf("\n");
   }
   return 0;
}
