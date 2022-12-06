//To find all the prime numbers between 2 to n Eratosthenes Sieve method

#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main() {
  int n;
  n=input_array_size();
  int a[n];
  init_array(n, a);
  erotosthenes_sieve(n, a);
  output(n, a);
  return 0;
}

int input_array_size() {
  int element;
  printf("Enter the number of elements for the array: ");
  scanf("%d", &element);
  return element;
}

void init_array(int n, int a[n]) {
  int i;
  for(i=0;i<n;i++) {
    a[i] = i;
  }
}

void erotosthenes_sieve(int n, int a[n]) {
  int i,k,num;
  for(i=2;i<n;i++) {
    num=a[i];
    if(num!=0) {
      for(k=num*num;k<n;k+=num) {
        a[k]=0;
      }
    }
  }
}

void output(int n, int a[n]) {
  int i;
  for(i=0;i<n;i++) {
    if(a[i]!=0 && a[i]!=1) {
      printf("%d ",a[i]);
    }
  }
}
