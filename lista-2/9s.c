#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumOfDigits(char *num) {
    int sum = 0;
    for (int i = 0; num[i]; i++) {
        sum += num[i] - '0';
    }
    return sum;
}

int degree9(char *num) {
    if (strlen(num) == 1 && num[0] == '9') {
        return 1;
    } else if (strlen(num) == 1) {
        return 0;
    }

    int sum = sumOfDigits(num);
    char sumStr[5];
    sprintf(sumStr, "%d", sum);

    return 1 + degree9(sumStr);
}

int main() {
  char num[1001];
  while (1) {
    scanf("%s", num);
    if (num[0] == '0' &&strlen(num)==1) {
        break;
    }
    int degree = degree9(num);

        if (degree > 0) {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", num, degree);
        } else {
            printf("%s is not a multiple of 9.\n", num);
        }
    
  }
  return 0;
}
