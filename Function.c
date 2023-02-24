// group of statement and have execute when called . it divides the larger program into small
// empty function is void
//  calling of funcrion will transfer the value to actual parameter
//  outcome is return back to the function

// Function to print square of a number

#include <stdio.h>
int square(int x)
{
    return x * x;
}
int main()
{
    int n, r;
    char ch;
    do
    {
        printf("Enter the number : ");
        scanf("%d", &n);
        r = square(n);
        printf("\nSquare of %d is : %d");
        printf("\nDo you want to continue  Y or N :");
        fflush(stdin);
        scanf("%c",&ch);

    } while (ch == 'Y');
}