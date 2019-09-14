#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct complex
{
	float real;
	float imag;
};

typedef struct complex Complex;

Complex mult(float scalar ,Complex c1){
	Complex c3;
	c3.real = scalar * c1.imag;
	c3.imag = scalar * c1.imag;
	return c3;
	
}

float norma(Complex c1){
	
	return sqrt(c1.real * c1.real + c1.imag * c1.imag);
}


int main(int argc, char const *argv[]) {
	
	Complex c1 = {4, 5};
	//Complex c2// = {3, 4};//
	Complex c3 = mult(float scalar , Complex c1);
	printf("C1: real=%f imag=%f\n", c1.real, c1.imag);
	printf("C2: real=%f imag=%f\n", c2.real, c2.imag);	
	printf("C3: real=%f imag=%f\n", c3.real, c3.imag);
	return 0;
}
