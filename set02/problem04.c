  //To find Sum of composite number in an array of different numbers entered by the user

#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main() {
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n, a);
  output(sum);
  return 0;
}

int input_array_size() {
  int elements;
  printf("Enter array size: ");
  scanf("%d", &elements);
  return elements;
}

void input_array(int n, int a[n]) {
  int i;
  for (i=0;i<n;i++) {
    printf("Enter a number: ");
    scanf("%d",&a[i]);
  }
}


int sum_composite_numbers(int n, int a[n]) {
  int result,i,k,count;
  result=0;
  for(i=0;i<n;i++) {
    count=0;
    for(k=1;k<=n;k++) {
      if(a[i]%k==0) {
        count=count+1;
      }
    }
    if(count>2) {
      result=result+a[i];
    }
  }
  return result;
}

void output(int sum) {
  printf("The sum is: %d \n",sum);
}