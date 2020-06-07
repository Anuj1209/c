#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
int a, b;
char *strings[] = {"one", "two", "three", "four", "five", "six", "seven",  "eight",  "nine", "even", "odd"};

scanf("%d\n%d", &a, &b);
      int labels_index;
  for (int i=a; i<=b; i++) {
    if (i <= 9) 
    printf ("%s\n", strings[i-1]);
    else 
    printf ("%s\n", strings[9+(i%2)]);


}
// Complete the code.

return 0;

}
