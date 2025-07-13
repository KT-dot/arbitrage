#include<stdio.h>
#include<stdbool.h>
#include<math.h>
// first==a second==b
bool arbitrage_checker(float a, float b)
{
    if(pow(a,-1)+pow(b,-1)<0.9524)
    {
        return true;
    }
    else
    {
        return false;
    }
}

float ratio_first(float a, float b)
{
    float top= pow(a,-1);
    float bottom= pow(a,-1)+pow(b,-1);
    return top/bottom;
}

int main()
{
    printf("first probability \n");
    float first;
    scanf("%f",&first);
    

    printf("second probability \n");
    float second;
    scanf("%f",&second);
    if(arbitrage_checker(first,second)==false)
    {
        printf("not worth it\n");
        return 0;
    }
    else
    {
        printf("enter amount ");
        float amount ;
        scanf ("%f",&amount);
        float bet_on_a = ratio_first(first,second);
        printf("bet on first =");
        printf("%f\n",bet_on_a*amount);
        printf("and bet on second =");
        printf("%f",(1-bet_on_a)*amount);
        printf("\nprofit = ");
        printf("%f\n",(bet_on_a*amount*first)-(amount));
    }
}