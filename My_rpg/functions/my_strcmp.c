#include <stdio.h>

int my_strlen(const char *str) {
    int a = 0;
    while (str[a] != '\0')
        a++;
    return (a);
}


int my_strcmp(const char *s1, const char *s2) {
  int n = 0;
  for (int i=0; i<my_strlen(s1) || i<my_strlen(s2); i++) {
    if (s1-s2 != 0) {
      n= (s1[i])-(s2[i]);
    }
  }
  return n;
}
