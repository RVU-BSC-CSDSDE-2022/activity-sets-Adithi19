//To find the sum of n complex numbers

#include <stdio.h>

struct _complex {
   float real;
   float imaginary;
};

typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
  int n;
  n = get_n();
  Complex c[n],result;
  input_n_complex(n,c);
  result = add_n_complex(n,c);
  output(n,c,result);
  return 0;
}

int get_n() {
  int index;
  printf("Enter the number of complex numbers: ");
  scanf("%d",&index);
  return index;
}

Complex input_complex() {
  Complex number;
  printf("Enter a complex number: ");
  scanf("%f %f", &number.real, &number.imaginary);
  return number;
}

void input_n_complex(int n, Complex c[n]) {
  int i;
  for (i=0;i<n;i++) {
    c[i]=input_complex();
  }
}

Complex add(Complex a, Complex b) {
  Complex addition;
  addition.real = a.real + b.real;
  addition.imaginary = a.imaginary + b.imaginary;
  return addition;
}

Complex add_n_complex(int n, Complex c[n]) {
  int i;
  Complex sum={0,0};
  for (i=0;i<n;i++) {
    sum=add(c[i],sum);
  }
  return sum;
}

void output(int n, Complex c[n], Complex result) {
  int i;
  for(i=0;i<n-1;i++) {
      printf("%.0f+%.0fi + ",c[i].real,c[i].imaginary);
  }
  printf("%.0f+%.0fi is %.0f+%.0fi \n",c[i].real,c[i].imaginary,result.real,result.imaginary);
}