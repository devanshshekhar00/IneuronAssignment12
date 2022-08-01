#include <stdio.h>
void n_NaturalNumbers(int);
  
int main()  
{  
   int lt;
   printf("Enter limit:\n");
   scanf("%d",&lt);
   n_NaturalNumbers(lt);
   
  
    return 0;  
}  
void n_NaturalNumbers(int k)
{
    printf("%d\n",k);
    if(k>1){
        n_NaturalNumbers(k-1);
    }
    else return;
    
}
