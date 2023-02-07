/*#include <stdio.h>
int main() {
    int a;
    printf("Enter your age %d\n",&a);
    scanf("%d",&a);
    if (a>=18)
    {
        printf("You Can Vote!!!");
    }
    else
    printf("You Can't Vote");
    return 0;  
}*/

/*#include <stdio.h>
int main()
{
    char name[20];
    printf("ENTER YOUR NAME: \t",name);
    scanf("%s",&name);
    printf("ENTER 1 FOR PASSED IN MATHS\t ENTER 2 FOR PASSED IN SCEINCE\t ENTER 3 FOR PASSED IN BOTH\n");
    int subject;
    scanf("%d",&subject);
    if (subject==1) {
        printf("YOU GOT 15 AS A GIFT\n");
    } else if (subject==2) {
        printf("YOU GOT 15 AS A GIFT\n");
    } else if (subject==3) {
        printf("YOU GOT 45 AS A GIFT !!!\n");
    } 
    else if (subject>=4){
        printf("---- E R R O R ----");
    }
    return 0;

}*/
/*#include <stdio.h>
int main ()  {
    int a;
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Even");
    }
    else
    printf("Odd");


    return 0;
    
    
}*/
/*#include <stdio.h>
int main ()  {
    int a;
    scanf("%d",&a);
    if (a%2==0 && a%3==0)
    {
        printf("Yes");
    }
    else
    printf("No");
    return 0;  
}
*/
#include <stdio.h>
int main()  {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("a is the Greatest");
    }
    else if (b>c)
    {
        printf("b is grestest");
    }
    
    else 
    
        printf(" c is greatest");
        
    return 0;
    
    
}