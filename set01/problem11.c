//To find the sum of 2 complex numbers

#include <stdio.h>

struct _complex {
	float real;
	float imaginary;
};

typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main() {
  Complex a,b,sum;
  a = input_complex();
  b = input_complex();
  sum = add_complex(a,b);
  output(a,b,sum);
  return 0;
}

Complex input_complex() {
  Complex digit;
  printf("Enter complex number: ");
  scanf("%f%f",&digit.real,&digit.imaginary);
  return digit;
}

Complex add_complex(Complex a, Complex b) {
  Complex add;
  add.real=a.real+b.real;
  add.imaginary=a.imaginary+b.imaginary;
  return add;
}

void output(Complex a, Complex b, Complex sum) {
  printf("The sum of %f+%fi and %f+%fi is %f+%fi \n",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}

