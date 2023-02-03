//To compare two strings, character by character

#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);

int main() {
  char string1[1000], string2[1000];
  int result;
  input_two_strings(string1, string2);
  result = stringcompare(string1, string2);
  output(string1, string2, result);
  return 0;
}

void input_two_strings(char *string1, char *string2) {
  printf("Enter the first string: ");
  scanf("%s",string1);
  printf("Enter the second string: ");
  scanf("%s",string2);
}

int stringcompare(char *string1, char *string2) {
  int i;
  for(i=0;(string1[i]!='\0' || string2[i]!='\0') && string1[i]-string2[i]==0;i++);
  return string1[i]-string2[i];
}
  
  
void output(char *string1, char *string2, int result) {
  if (result>0) {
    printf("%s is greater than %s \n",string1, string2);
  }
  else if (result<0){
    printf("%s is greater than %s \n",string2, string1);
  }
  else {
    printf("The strings are equal \n");
  }
}



