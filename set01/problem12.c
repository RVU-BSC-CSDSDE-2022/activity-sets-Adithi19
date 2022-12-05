//To find the sum of n complex numbers

#include <stdio.h>

struct _complex {
   float real;
   float imaginary;
};

typedef struct _complex Complex;

int get_n();
void input_n_complex(int n, Complex c[n]);
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

void input_n_complex(int n, Complex c[n]) {
  int i;
  for (i=0;i<n;i++) {
    printf("Enter complex number: ");
    scanf("%f%f",&c[i].real,&c[i].imaginary);
  }
}

Complex add_n_complex(int n, Complex c[n]) {
  int i;
  Complex sum={0,0};
  for (i=0;i<n;i++) {
    sum.imaginary=sum.imaginary+c[i].imaginary;
    sum.real=sum.real+c[i].real;
  }
  return sum;
}

void output(int n, Complex c[n], Complex result) {
  int i;
  for(i=0;i<n-1;i++) {
      printf("%f+%fi + ",c[i].real,c[i].imaginary);
  }
  printf("%f+%fi is %f+%fi \n",c[i].real,c[i].imaginary,result.real,result.imaginary);
}