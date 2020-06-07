#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    { int a,b; float c,d;
     scanf("%d %d\n%f %f",&a,&b,&c,&d);
      if(1<=(a,b)<=10^4) 
      {
           printf("%d %d\n",a+b,a-b);
            if(1<=(c,d)<=10^4)
             {
                  printf("%.1f %.1f",c+d,c-d);
                   } 
                   }
    }
    return 0;
}
