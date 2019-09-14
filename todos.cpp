#include <stdio.h>
#include <stdlib.h>
#include <math.h>



struct complex
{
	float real;
	float imag;
	float tamanho;
	float angulo;
	
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

Complex Conjugado(Complex c1){
	Complex c3;
	c3.real = c1.real;
	c3.imag = -c1.imag;
	return c3;
	
}

Complex divisao(Complex c1, Complex c2){
	
	float denom = norma(c2) * norma (c2);
	Complex c3;
	c3.real = (c1.real * c2.real + c1.imag * c2.imag) / denom;
	c3.imag = (c2.real * c1.imag - c1.real * c2.imag) / denom;
	return c3; 

	
}

float angulo(Complex c1){
	float angle = atan(c1.imag/c1.real);
	return angle;
	
}



int main(int argc, char const *argv[]) {
	
	Complex c1 = {4, 5};
	Complex c2 = {3, 4};
	Complex c3 = mult(c1, c2);
	printf("C1: real=%f imag=%f\n", c1.real, c1.imag);
	printf("C2: real=%f imag=%f\n", c2.real, c2.imag);	
	printf("C3: real=%f imag=%f\n", c3.real, c3.imag);
	return 0;
}
