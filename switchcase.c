#include <stdio.h>
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
}
