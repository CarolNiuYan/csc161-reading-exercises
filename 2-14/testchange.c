#include <stdio.h>

void change(int x) {
	x = 3;
}

void main(void) {
	int x = 0;
	change(x);
	printf("%d\n",x);
}
