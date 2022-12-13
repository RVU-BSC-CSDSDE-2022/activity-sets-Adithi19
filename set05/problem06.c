//To find the average of all the odd elements in an array

#include <stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main() {
  int n;
  float avg;
  n=input_n();
  int a[n];
  input(n,a);
  avg=odd_average(n,a);
  output(avg);
  return 0;
}

int input_n() {
  int elements;
  printf("Enter the number of elements: ");
  scanf("%d",&elements);
  return elements;
}

void input(int n, int a[n]) {
  int i;
  for (i=0;i<n;i++) {
    printf("Enter a number: ");
    scanf("%d",&a[i]);
  }
}

float odd_average(int n, int a[n]) {
  int i;
  float result,sum,count;
  sum=0.0;
  for(i=0;i<n;i++) {
    if(a[i]%2!=0) {
      sum=a[i]+sum;
      count=count+1;
   }
  }
  result=sum/count;
  return result;
}

void output(float avg) {
  printf("Average of the odd number in the array is %.0f \n",avg);
}