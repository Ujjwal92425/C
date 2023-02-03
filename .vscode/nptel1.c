/* You are given two positive integers, say M and N.
Check whether M is an exact multiple of N, without using loops.

Input
-----
Two positive integers, say M and N.

Output
------
You have to output 0 if M is not a multiple of N.
You have to output 1 if M is a multiple of N.
#include <stdio.h>
int main()   {
    int M;
    int N;
    scanf("%d",&M);
    scanf("%d",&N);
    if (M%N==0)
    {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0 ;
}
*/
/*Given three integers a b and c, find if they are strictly increasing/decreasing or not.
 
Input
-------
Triplet of three integers (a,b,c)

Output
---------
You have to output 1 if they are either in strictly increasing (a>b>c) or decreasing (a<b<c) order.
Output 0, otherwise. */
#include <stdio.h>
int main ()  {
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if (a>b && b>c)
    {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}
/*Objective

This challenge will help you to learn how to take a character, a string and a sentence as input in C.

To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout

char ch;
scanf("%c", &ch);
printf("%c", ch);
This piece of code prints the character .

You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.

In order to take a line as input, you can use scanf("%[^\n]%*c", s); where  is defined as char s[MAX_LEN] where  is the maximum size of . Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.

Note: The statement: scanf("%[^\n]%*c", s); will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.

Task

You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

Input Format

First, take a character,  as input.
Then take the string,  as input.
Lastly, take the sentence  as input.

Constraints

Strings for  and  will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, .

Sample Input 0

C
Language
Welcome To C!!
Sample Output 0

C
Language
Welcome To C!!
Contest ends in 9 days
Submissions: 666
Max Score: 15
Difficulty: Easy
Rate This Challenge:

    
More
 
\n
1
#include <stdio.h>
2
#include <string.h>
3
#include <math.h>
4
#include <stdlib.h>
5
​
6
int main() 
7
{
8
​
9
    char ch;
10
    char s[100];
11
    char sen[1000];
12
    scanf("%c",&ch);
13
    scanf("%s",s);
14
    scanf("\n%[^\n]%*c",sen);
15
    printf("%c\n",ch);
16
    printf("%s\n",s);
17
    printf("%s",sen);
18
    
19
    return 0;
20
}
Line: 14 Col: 14
Run Code Submit CodeUpload Code as File 
Test against custom input
Testcase 0
Congratulations, you passed the sample test case.

Click the Submit Code button to run your code against all the test cases.

Input (stdin)

C
Language
Welcome To C!!
Your Output (stdout)

C
Language
Welcome To C!!
Expected Output

C
Language
Welcome To C!!
*/
#include <stdio.h>
