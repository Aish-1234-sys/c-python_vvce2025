#include<stdio.h>
float calculateBill(char wardType, int days);
int main(){
    char name[100],wardType;
    int days;
    float bill=0.0f;
    printf("patients name:");
    scanf("%s",name);
    printf("ward type P/S/G:");
    scanf(" %c",&wardType);
    printf("no of days admitted");
    scanf("%d",&days);
    switch(wardType)
    {
        case 'P':bill=calculateBill( wardType, days);
        if(days>7)
        {
        printf("\nTotal Bill Before Discount:%f",bill);
        printf("\nDiscount Applied:%f*0.5",bill);
        printf("\nFinal Bill Amount:%f*0.5",bill);
       
        }
        else
        {
            printf("\nFinal Bill Amount:%f",bill);
        }
        break;
    case 'S':bill=calculateBill( wardType,  days);
    if(days>7)
        {
        printf("\nTotal Bill Before Discount:%f",bill);
        printf("\nDiscount Applied:%f*0.5",bill);
        printf("\nFinal Bill Amount:%f*0.5",bill);
       
        }
        else
        {
            printf("\nFinal Bill Amount:%f",bill);
        }
        break;
    case 'G':bill=calculateBill(wardType,  days);
    if(days>7)
        {
        printf("\nTotal Bill Before Discount:%f",bill);
        printf("\nDiscount Applied:%f*0.5",bill);
        printf("\nFinal Bill Amount:%f*0.5",bill);
       
        }
        else
        {
            printf("\nFinal Bill Amount:%f",bill);
        }
        break;
}
float calculateBill(char wardType, int days)
{
    if (wardType=='P')
    return (float)days*5000;
    else if(wardType=='S')
    return (float)days*2000;
    else if(wardType=='G')
    return (float)days*1000;

}
}