/*TITLE : Ko...korewa... BAOH da !
 AUTHOR :  OBSIDIAN
 WHAT IS THIS ?  : An advanced fraction calculator  */

#include <stdio.h>
#include <stdlib.h>

float add(frac11, frac12, frac21, frac22)
{
    float result, result1, result2;
        printf("\nNow, choose the fraction's terms !  ( float-enter*4 )\n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        result1 = frac11/frac12;
        result2 = frac21/frac22;
        result = result1 + result2;
        printf("Et hop : %f + %f = %f\n",result1, result2, result);
}
float substract(frac11, frac12, frac21, frac22)
{
    float result, result1, result2;
        printf("\nNow, choose the fraction's terms !  ( float-enter*4 )\n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        result1 = frac11/frac12;
        result2 = frac21/frac22;
        result = result1 - result2;
        printf("Et hop : %f - %f = %f\n",result1, result2, result);
}
float divide(frac11, frac12, frac21, frac22)
{
    float result, result1, result2;
        printf("\nNow, choose the fraction's terms !  ( float-enter*4 )\n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        result1 = frac11/frac12;
        result2 = frac21/frac22;
        result = result1/result2;
        printf("Et hop : %f / %f = %f\n",result1, result2, result);
}
float product(frac11, frac12, frac21, frac22)
{
    float result, result1, result2;
        printf("\nNow, choose the fraction's terms !  ( float-enter*4 )\n");
        scanf("%f %f  %f %f", &frac11, &frac12, &frac21, &frac22);
        result1 = frac11/frac12;
        result2 = frac21/frac22;
        result = result1 * result2;
        printf("Et hop : %f * %f = %f\n",result1, result2, result);
}
/// MAIN
int main(void)
{
   //List
   int operator;
   int loop;
   loop = 0;
   operator = 0;
    //Operator choice
    while (42)
   {
        printf(" \n                        OPERATOR SELECTION MENU  \n");
        printf("                        1. Addition        \n");
        printf("                        2. Substraction    \n");
        printf("                        3. Division        \n");
        printf("                        4. Product         \n");
        printf("                        5. Pow             \n");
        printf("                        6. Quit            \n");
        printf("\nSelection : ");
        scanf("\n%d", &operator);
    if(operator <= 6  ) // It include the six for a secret !
       switch(operator)
       {
        case 1:
        add();
      //save();
            break;
        case 2:
        substract();
        //save();
            break;
        case 3:
        divide();
        //save();
            break;
        case 4:
        product();
        //save();
            break;

        case 5:
        exit(1);
            break;
        case 6:
        printf("MADE BY STOMATE PRODUCTION\n");
            break;
       }
    else
        printf("1,2,3,4 or 5!!! It's easy to remember right !?\n"); // +1 for the loop
        loop ++;
   }
    return 0;
}
