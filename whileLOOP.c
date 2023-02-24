/*#include <stdio.h>
int main()
{
    int num = 0;
    while (num < 10000)
    {
        num = num + 1;
        printf(" * JAI SHREE RAM \t JAI SHREE RAM \t  JAI SHREE RAM \t JAI SHREE RAM *\n ");
        printf("** \t JAI SHREE RAM \t JAI SHREE RAM \t JAI SHREE RAM \t JAI SHREE RAM **\n ");
        printf(" *** \t\tJAI SHREE RAM \t JAI SHREE RAM \t JAI SHREE RAM \t JAI SHREE RAM *** \n ");
        printf(" ***** \t\t\tJAI SHREE RAM \t JAI SHREE RAM \t JAI SHREE RAM \t JAI SHREE RAM ****\n ");
    }

    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int num = 0;
    while (num < 100)
    {
        num = num + 1;
        printf("\n******          ******\t       ******       ****");
        printf("\n******          ******\t       ******     ******");
        printf("\n******          ******\t       ******   ******");
        printf("\n******          ******\t       ******  *******");
        printf("\n******          ******\t       ****** *******");
        printf("\n******          ******\t       *************");
        printf("\n******          ******\t       ****** *******        ");
        printf("\n******          ******\t       ******   ****      ");
        printf("\n******          ******\t       ******    ******     ");
        printf("\n**********************\t       ******      ******    ");
        printf("\n**********************\t       ******        *******   ");
        printf("\n**********************\t       ******        *******   ");
        printf("\n**********************\t       ********         ******");
        printf("\n ");
        printf("\n");
    }

    return 0;

}*/



#include <stdio.h>
int main()
{
    int a;
    int rem;
    int rev=0;
    scanf("%d",&a);
    long int y=a;

    while (a>0)
    {
        rem = a % 10;
        rev = rev *10 +rem;
        a = a / 10 ;   
    }
    printf("\n Reverse = %d",rev);

    if (y==rev)
    {
        printf("\n");
        printf("%d is a palindrome",y);
    }

    else  { 
    printf("\n");
    printf("%d is not palindrome",y);
    }  
}    