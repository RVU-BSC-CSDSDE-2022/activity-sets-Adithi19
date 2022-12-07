//To find the index of a substring of a string

#include <stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() {
  char* a[100];
  char* b[100];
  int index;
  input_string(&a,&b);
  index=sub_str_index(a,b);
  output(a,b,index);
  return 0;
}

void input_string(char* a, char* b) {
  printf("Enter a string: ");
  scanf("%s",a);
  printf("Enter the substring: ");
  scanf("%s",b);
}

int sub_str_index(char* string, char* substring) {
  int i,k,position,index;
  position=0;
  for(i=0;string[i]!='\0';i++) {
    index=0;
    if(string[i]==substring[0]) {
      for(k=i;substring[index]!='\0';k++) {
        if(string[k]==substring[index]) {
          position=i;
        }
        else {
          break;
        }
        index++;
      }
    }
  }
  return position;
}

void output(char *string, char *substring, int index) {
  printf("The index of %s in %s is %d \n",string,substring,index);
}