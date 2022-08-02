#include <stdio.h>
int octal(int );
int main() {
   
    int k;printf("Enter number\t");
    scanf("%d",&k);
    printf("%d",octal(k));

    return 0;
}
int octal(int k)
{
    if(k==0) return 0;
    return (k%8 + 10*(octal(k/8)));
}
