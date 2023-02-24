/*#include <stdio.h>
int main () {
    int a;
    for (a = 0; a < 100; a++)
    {
        printf(" \t UJJU  \n");
        printf(" UJJU \n");
        printf(" \t\t UJJU \n");
    }
    return 0;
    
}*/

#include <stdio.h>
int main () {
    int n;
    printf("Enter the number : ",n);
    scanf("%d",&n);
    long long int f = 1;
    int i ;
    for (i=1; i<=n; i++)
    {
        f = f * 1;
    }
    printf("Factorial of %d is : %lld",f);
    return 0 ;

    
}