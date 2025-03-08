#include <stdio.h>

int main()
 {
    int weight;
    printf("Input");
    scanf("%d", &weight);
    
    if (weight < 0)
     {
        printf("INVALID INPUT\n");
    } 
    else if (weight == 0) 
    {
        printf("Time Estimated: 0 minutes\n");
    } 
    else if (weight >= 1 && weight <= 2000) 
    {
        printf("Time Estimated: 25 minutes\n");
    } 
    else if (weight >= 2001 && weight <= 4000) 
    {
        printf("Time Estimated: 35 minutes\n");
    } 
    else if (weight >= 4001 && weight <= 7000)
     {
        printf("Time Estimated: 45 minutes\n");
    } 
    else  (weight > 7000); 
    {
        printf("OVERLOADED\n");
    } 
    
    return 0;
}
