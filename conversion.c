#include <stdio.h>

int main()
{
    int num, thousand, hundreds, tens, ones;
    
    printf("Input an integer between 1-10000:");
    scanf("%d", &num);
    
    
    thousand = num/1000;
    hundreds = (num%1000)/100;
    tens = (num%100)/10;
    ones = num%10;
        
    if (num>10000)
    {
        printf("Exceeded to the maximum limit");
    }
    if (num==10000)
    {
        printf("Ten thousand");
    }
    if (num<10000)
    {
        switch(thousand)
        {
            case 1:
                printf("One thousand");
                break;
            case 2:
                printf("Two thousand");
                break;
            case 3:
                printf("Three thousand");
                break;
            case 4:
                printf("Four thousand");
                break;
            case 5:
                printf("Five thousand");
                break;
            case 6:
                printf("Six thousand");
                break;
            case 7:
                printf("Seven thousand");
                break;
            case 8:
                printf("Eight thousand");
                break;
            case 9:
                printf("Nine thousand");
                break;
        }
    }
    if (num<10000)
    {
        switch(hundreds)
        {
            case 1:
                printf(" One hundred");
                break;
            case 2:
                printf(" Two hundred");
                break;
            case 3:
                printf(" Three hundred");
                break;
            case 4:
                printf(" Four hundred");
                break;
            case 5:
                printf(" Five hundred");
                break;
            case 6:
                printf(" Six hundred");
                break;
            case 7:
                printf(" Seven hundred");
                break;
            case 8:
                printf(" Eight hundred");
                break;
            case 9:
                printf(" Nine hundred");
                break;
        }
    }
    if (num<10000)
    {
        switch(tens)
        {
            case 1:
                printf(" Ten");
                break;
            case 2:
                printf(" Twenty -");
                break;
            case 3:
                printf(" Thirty -");
                break;
            case 4:
                printf(" Forty -");
                break;
            case 5:
                printf(" Fifty -");
                break;
            case 6:
                printf(" Sixty -");
                break;
            case 7:
                printf(" Seventy -");
                break;
            case 8:
                printf(" Eighty -");
                break;
            case 9:
                printf(" Ninety -");
                break;
        }        
                
                switch(num%100)
        {
            case 21 ... 99:
                printf(" One");
                break;
            case 2:
                printf(" Two");
                break;
            case 3:
                printf(" Three");
                break;
            case 4:
                printf(" Four");
                break;
            case 5:
                printf(" Five");
                break;
            case 6:
                printf(" Six");
                break;
            case 7:
                printf(" Seven");
                break;
            case 8:
                printf(" Eight");
                break;
            case 9:
                printf(" Nine");
                break;
        }
        
    }
    
    if (num<10000)
    {
        switch(num%100)
        {
            case 1:
                printf(" One");
                break;
            case 2:
                printf(" Two");
                break;
            case 3:
                printf(" Three");
                break;
            case 4:
                printf(" Four");
                break;
            case 5:
                printf(" Five");
                break;
            case 6:
                printf(" Six");
                break;
            case 7:
                printf(" Seven");
                break;
            case 8:
                printf(" Eight");
                break;
            case 9:
                printf(" Nine");
                break;
        }
        
    }
    if (num<10000)
    {
        switch(num%100)
        {
            case 11:
                printf(" Eleven");
                break;
            case 12:
                printf(" Twelve");
                break;
            case 13:
                printf(" Thirteen");
                break;
            case 14:
                printf(" Fourteen");
                break;
            case 15:
                printf(" Fifteen");
                break;
            case 16:
                printf(" Sixteen");
                break;
            case 17:
                printf(" Seventeen");
                break;
            case 18:
                printf(" Eighteen");
                break;
            case 19:
                printf(" Nineteen");
                break;
        }
    }

    return 0;
}
