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

/*#include <stdio.h>
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


#include <stdio.h>
int main()
{
    int x;
   
    scanf("%d", &x);
    

    switch (x)
    {
    case 1:
        printf("Jan");
        break;

    case 2:
        printf("Feb");
        break;

    case 3:
        printf("March");
        break;

    case 4:
        printf("April");
        break;

    case 5:
        printf("May");
        break;

    case 6:
        printf("June");
        break;

    case 7:
        printf("July");
        break;
    
     case 8:
        printf("August");
        break;

    case 9:
        printf("Sep");
        break;

    case 10:
        printf("Oct");
        break;

    case 11:
   
        printf("Nov");
        break;

    default:
        printf("Dec");
        break;
    }
    

    return 0;
}*/

#include <stdio.h>
int main()
{
    int x;
   
    scanf("%d", &x);
    if (x==2,3)
    {
        printf("Spring");
    }
    else if (x==4,5,6,7,8,9)
    {
        printf("Summer");
        
    }
    else if (x==10,11)
    {
        printf("Auttum");
    }
    
    else if (x==1,12)
    {
        printf("Winter");
    }
    return 0;  
}