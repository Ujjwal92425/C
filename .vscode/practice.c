/*#include <stdio.h>
int main ()  {
    int a,b,c,d;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if (a+b+c >= d)
    {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
	int age;
	char gen;
	printf("Enter your age=");
	scanf("%d",&age);
	if(age>=18)
	{
		fflush(stdin);
		printf("Enter your gender=");
		scanf("%c",&gen);
		if(gen=='M' || gen=='m')
		{
			if (age>=60)
			{
				printf("\nCast your vote from booth no 22!");
			}
			else
			{
		printf("\nCast your vote from booth no 21!");		
			}
		}
		else
		{
			if (age>=60)
			{
				printf("\nCast your vote from booth no 22!");
			}
			else
			{
		printf("\nCast your vote from booth no 20!");		
			}
		}
	}
	else
	{
		printf("\nYou are no eligible for voting !");
	}
}