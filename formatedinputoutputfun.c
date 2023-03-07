/*used to take inputs from user and provides multiple output to user.these function can help the user to view the output in different ways.*/
//sprintf() & sscanf() . s stand for string print. print steing to character array insted of printing on consol screen.
/*#include <stdio.h>
int main () {
    char s[50];
    int a,b;
    a = 10;
    b = 20;
    //store the even number a and b in string S
    sprintf(s,"%d and %d are even number",a,b);
    printf("\n %s",s);
    
}




#include <stdio.h>
int main () {
    char s[50];
    int a,b,c,d;
    a = 10;
    b = 20;
    //store the even number a and b in string S
    sprintf(s," a = %d and  b = %d ",a,b);
    sscanf(s,"a = %d and b = %d ", &c,&d);
    printf("\n c = %d",c);
    printf("\n d = %d",d);
    

    
}

// these function used for only char or string datatype, used to read single input from user at the consol and allow the
//user to display the char at the consol
// getch() getche()  getchar()  putchar() gets() puts() . first 4 only single char. put means write means output
//1 = single character but doesnot display the charasy=ter on the consol and immidwtaly return without pressing enter.



#include <stdio.h>
int main () {
    char ch;
    printf("Enter the character ");
    ch= getchar();
    printf("\n Enter character = %c " ,ch);
}*/

// write a program to printe name reg,no;

#include <stdio.h>
int main () {
    char name[20],reg[10],section[6];
    printf("Enter name \n");
    gets(name);
    printf("\nEnter Reg.no \n");
    gets(reg);
    printf("\nEnter section \n\n");
    scanf("%s",&section);
    printf("\nName : ");
    puts(name);
    printf("\nReg : ");
    puts(reg);
    printf("\nSection : ");
    puts(section);


}


// call by value, values of actual parameter will be copied to formal
// call by refference: the address of actual parameter is copied to the formal(in this case is pointer variable)
