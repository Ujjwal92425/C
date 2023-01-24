// always save the file before running
//%d in in and %f in float

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


#include <stdio.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];

    // Read a character
    scanf("%c", &ch);

    // Read a string
    scanf("%s", s);

    // Consume the newline character from the previous line
    scanf("\n");

    // Read a sentence until a newline character is encountered
    scanf("%[^\n]%*c", sen);

    // Print the character
    printf("%c\n", ch);

    // Print the string
    printf("%s\n", s);

    // Print the sentence
    printf("%s\n", sen);

    return 0;
}

*/


//*********************************loop*******************************
#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i == 1) {
            printf("one\n");
        } else if (i == 2) {
            printf("two\n");
        } else if (i == 3) {
            printf("three\n");
        } else if (i == 4) {
            printf("four\n");
        } else if (i == 5) {
            printf("five\n");
        } else if (i == 6) {
            printf("six\n");
        } else if (i == 7) {
            printf("seven\n");
        } else if (i == 8) {
            printf("eight\n");
        } else if (i == 9) {
            printf("nine\n");
        } else if (i > 9) {
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
    return 0;
}

/*Objective

In this challenge, you will learn the usage of the for loop, which is a programming language statement which allows code to be executed until a terminal condition is met. They can even repeat forever if the terminal condition is never met.

The syntax for the for loop is:

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
The following loop initializes  to 0, tests that  is less than 10, and increments  at every iteration. It will execute 10 times.

for(int i = 0; i < 10; i++) {
    ...
}
Task

For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Input Format

The first line contains an integer, .
The seond line contains an integer, .

Constraints


Output Format

Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
*/

