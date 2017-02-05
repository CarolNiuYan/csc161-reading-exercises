#include <stdio.h>

int main(void) {
    int grade = 99 /* arbitrary initialiaztion of grade */;
    char letter = 'f';    /* by default... */
    {  
    if (grade > 90) {
        letter = 'a';
    }
    else  if (grade > 80) {
        letter = 'b';
    }
    else if (grade > 70) {
        letter = 'c';
    }
    else if (grade > 60) {
        letter = 'd';
    }}
    printf("%c\n", letter);
    return 0; 
}
//because the if causes do not have else, thus it automatically changes the structure. All the if becomes nested and in the end the  printf causes be the "else" of" if (grade > 60)"//
//for example, if the grade is 99, it will still return d while the correct result should be a.//
 
