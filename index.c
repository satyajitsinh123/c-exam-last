#include <stdio.h>
void fun(int s, int b){
    int temp;
    temp=s;
    s=b;
    b=temp;
    printf("after swaipe=>\n");
    printf("%d\n",s);
    printf("%d\n",b);
}

int main()
{
   printf("befor Swipe => \n");
   int s=5;
   int b=3;

   printf("%d\n",s);
   printf("%d\n",b);
   fun(s,b);
  
  return 0;
}
