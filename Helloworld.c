#include<stdio.h>
int main()
{
 int N=10,M,k=5;
 printf("input");
 scanf("%d",&M);
 if (M>N||M<=0){
    printf("invalid input");
    printf("\nremaining canidies %d",N);
 }
 else{
    printf("\n no of candies sold %d",M);
    if(N-M<=k){
        N=10;
        printf("\nremaining canidies %d",N);  
    }
    else{
        printf("\nremaining canidies %d",N-M); 

    }

 }

return 0;
 

}