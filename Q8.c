#include <stdio.h>
int binary(int );
int main() {
    // Write C code here
    int k;printf("Enter number\t");
    scanf("%d",&k);
    printf("%d",binary(k));

    return 0;
}
int binary(int k)
{
    if(k==0) return 0;
    return (k%2 + 10*(binary(k/2)));
}
