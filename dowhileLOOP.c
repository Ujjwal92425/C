/*#include <stdio.h>
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
}*/

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

/*#include <stdio.h>
int main()
{
    int num = 0;
    do
    {
        printf("%d", num);
        printf("\n");
        num++;
    } while (num <= 100); // condition till it will ittrate
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n1=1;
    int n2=2;
    int n3;
   
    scanf("%d", n3);
    do
    {
        n3 = n1 + n2;
        printf("series: %d \n", n3);
        printf("\n");
        

    } while (n3 == 50); // condition till it will ittrate
    return 0;
}*/
int main()
{
    int t1=1;
    int t2=2;
    int tno=3;
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int nt;
    printf("%d\n",t1);
    printf("%d\n",t2);
    do
    {
        nt=t1+t2;
        printf("%d\n",nt);
        tno=tno+1;
        t1=t2;
        t2=nt;
    } while(tno<=n);

    return 0;
}