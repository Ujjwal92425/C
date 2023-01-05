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


