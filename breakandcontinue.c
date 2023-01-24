#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        printf("Enter your number  %d \n",i );
        scanf("%d", &i);
        if (i>50)
        {
            break;
        }
        
    }
    return 0;
    
}