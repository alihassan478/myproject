#include <stdio.h>

int main(void)
{
    int number , num1 , larg , smal;
    int i = 2;
    printf("Enter your number 1 : ");
    scanf("%d" ,&num1);
    larg = num1;
    smal = num1;
    while (i<=5)
    {
        /* code */
        printf("Enter your number %d : " , i++);
        scanf("%d" , &number);
        if(number>larg)
        {
            larg = number;
        }
        else if(number<smal)
        {
            smal = number;
        }
    }

    printf("Max = %d \nMin = %d" , larg , smal);
    return 0;
    

}