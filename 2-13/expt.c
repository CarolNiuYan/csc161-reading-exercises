#include <stdio.h> 

float  expt (double x, int y) {
	float a = 1;
	if (y>=0) {
	       for (int i=0;i<y;i++) {
		       a=a*x;}
	}
	else {
		for (int i=0;i>y;i--) {
			a=a/x;}
	}
	return a;
}



int main () {
  printf("%f\n",(expt(2.0,-3)));
  printf("%f\n",(expt(2.0,4)));
  return 0;
}

