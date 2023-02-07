/*#include <stdio.h>
int main()
{
    int number;
    printf("----- * Guess * The * Number * -----\n");

    scanf("%d",&number);

    printf("The number you have gussed is %d\n",number);

    switch (number)
    {
    case 7:
        printf("YOU HAVE GUSSED THE RIGHT NUMBER\n \t *****----- CONGRATULATIONS----- ****");
        break;

    default:
        printf(" < WRONG GUESS > ^^>>__ BETTER LUCK NEXT TIME ");
        break;
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int a, b, x;
    printf("----- * Choose * Your * Number * -----\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("1 for sum\t 2 for subtraction\t3 for multiplication\t4 for division\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Sum  : %d", a + b);
        break;

    case 2:
        printf("Subtraction: %d ", a - b);
        break;

    case 3:
        printf("Multiplication : %d", a * b);
        break;

    case 4:
        printf("Division : %d", a / b);
        break;

    default:
        printf("\nInvalid Input ");
        break;
    }
    return 0;
}
