#include <stdio.h>

int main()
{
    float num;
    float yrs;
    float interest;
    float rate=.1;
    float OrgAmount;
    int i;
    
    printf("Input amount: ");
    scanf("%f", &num);
    printf("Input number of years: ");
    scanf("%f", &yrs);
    
    if (num>0 && yrs>0)
    {
        i=1;
        do
        {
            interest = (num * rate)*i ;
            OrgAmount = num - interest;
            i++;
        }while(i<=yrs);
        
        printf("The Origianl Amount is: %.2f", OrgAmount);
    }
    else
    {
        printf("Does not proceed with negative numbers");
    }
  
    

    return 0;
}

