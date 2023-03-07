/*Roy wants to change his profile picture on Facebook. Now Facebook has some restriction over the dimension of picture that we can upload. Minimum dimension of the picture can be L x L, where L is the length of the side of square.

Now Roy has N photos of various dimensions. Dimension of a photo is denoted as W x H where W - width of the photo and H - Height of the photo

When any photo is uploaded following events may occur:

[1] If any of the width or height is less than L, user is prompted to upload another one. Print "UPLOAD ANOTHER" in this case. [2] If width and height, both are large enough and (a) if the photo is already square then it is accepted. Print "ACCEPTED" in this case. (b) else user is prompted to crop it. Print "CROP IT" in this case.

(quotes are only for clarification)

Given L, N, W and H as input, print appropriate text as output.

Input Format

First line contains L. Second line contains N, number of photos. Following N lines each contains two space separated integers W and H.

Constraints

1 <= L,W,H <= 10000 1 <= N <= 1000

Output Format

Print appropriate text for each photo in a new line.

Sample Input 0

180
3
640 480
120 300
180 180
Sample Output 0

CROP IT
UPLOAD ANOTHER
ACCEPTED
Contest ends in 8 hours
Submissions: 3082
Max Score: 15
Difficulty: Medium
Rate This Challenge:

    
More
 
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
int main() {
7
    
8
    int L, N, W, H;
9
    scanf("%d", &L); 
10
    scanf("%d", &N); 
11
​
12
    for (int i = 0; i < N; i++) {
13
        scanf("%d %d", &W, &H); 
14
        if (W < L || H < L) {
15
            printf("UPLOAD ANOTHER\n");
16
        } else if (W == H) {
17
            printf("ACCEPTED\n");
18
        } else {
19
            printf("CROP IT\n");
20
        }
21
    }
22
    return 0;
23
}
24
​
25
    
Line: 7 Col: 5
Run Code Submit CodeUpload Code as File 
Test against custom input
Testcase 0
Congratulations, you passed the sample test case.

Click the Submit Code button to run your code against all the test cases.

Input (stdin)

180
3
640 480
120 300
180 180
Your Output (stdout)

CROP IT
UPLOAD ANOTHER
ACCEPTED
Expected Output

CROP IT
UPLOAD ANOTHER
ACCEPTED*/
