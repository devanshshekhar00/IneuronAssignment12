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
    
    if(k>0){
        n_NaturalNumbers(k-1);
    }
    else return;
    if(k%2!=0) printf("%d\n",k);
    
    
}
