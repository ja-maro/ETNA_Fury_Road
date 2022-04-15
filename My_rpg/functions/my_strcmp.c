#include <stdio.h>

int my_strlen(const char *str);

int my_strcmp(const char *s1, const char *s2) {
  int i;
  int n = 0;
  int len1 = my_strlen(s1);
  int len2 = my_strlen(s1);

  for (i = 0; i < len1 || i < len2; i++) {
    if (s1 - s2 != 0) {
      n = (s1[i]) - (s2[i]);
    }
  }
  return n;
}
