// In simpleloops.c
// Compile with -std=c11 flag so that variable-initialization in loops works

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }                               //expression 1//
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
    }                               //expression 2//
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }                               //expression 3//
    for (int i = 10; i > 0; i--) {
        printf("%d\n", i); 
    }                               //expression 4//
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i); 
    }                               //expression 5//
      return 0;
}
//the output of expreassion 1 is :
//0
//1
//2
//3
//4
//5
//6
//7
//8
//9
//the output of expression 2 is:
//0
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//the output of expression 3 is:
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//the output of expression 4 is:
//10
//9
//8
//7
//6
//5
//4
//3
//2
//1
//the output of expression 5 is:
//10
//9
//8
//7
//6
//5
//4
//3
//2
//1
//0

//1. expression 1, 3 and 4 all iterates 10 times. 
//2. expression 2 prints the value 0 through 10 in increasing order.
//3. expression 5 prints the value 10 through 0 in decreasing order.
