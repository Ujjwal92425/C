#include <stdio.h>
int main()
{
    int num = 0;
    do
    {
        num = num + 1; // expression -
        printf("I LOVE YOU \t I LOVE YOU \n");
        printf("\t I LOVE YOU \t I LOVE YOU \n"); // code to be executed
    } while (num < 100);                          // condition till it will ittrate
    return 0;
}

/*#include <stdio.h>
int main()
{
    
    int money;
    printf("ENTER YOUR  SALLERY :  \n", money);

    scanf("%d", &money);
    do
    {
        money = money + 1000;
        printf(" YOUR SALLERY  INCRESED TO : %d\n", money);

    } while (money < 100000);
    return 0;
}
*/