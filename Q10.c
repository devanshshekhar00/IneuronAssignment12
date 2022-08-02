#include <stdio.h>
void reverse(int );
int main() {
   
    int k;printf("Enter number\t");
    scanf("%d",&k);
    reverse(k);

    return 0;
}
void reverse(int k)
{
    if(k<1) return;
    int j = k%10;int f = k/10;
    printf("%d",j);reverse(f);
    
    
    
}
