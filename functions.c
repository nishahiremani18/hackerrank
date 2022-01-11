#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a,int b,int c,int d){
   int max;
   if(a>b && a>c && a>d)
   max=a;
   else if(a<b && b>c && b>d)
   max=b;
   else if(a<c && b<c && c>d)
   max=c;
   else if(a<d && d>c && b<d)
   max=d;
   else if(a=b=c=d)
   max=a;
   return max;
}
