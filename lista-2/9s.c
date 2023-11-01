#include <stdio.h>
#include <string.h>

int degree9(char *num, int degree) {
    if (strlen(num) == 1 && num[0] == '9') {
        return degree;
    } else if (strlen(num) == 1) {
        return -1;
    }

    int sum = 0;
    for (int i = 0; num[i]; i++) {
        sum += num[i] - '0';
    }
    char sumStr[5];
    sprintf(sumStr, "%d", sum);

    if (sum != 9) {
        return degree9(sumStr, degree + 1);
    }
    else{
        return degree;
    }
}

int main() {
    char num[1001];
    while (1) {
        scanf("%s", num);
        if (num[0] == '0' && strlen(num) == 1) {
            break;
        }
        int deg = degree9(num, 1);

        if (deg == -1) {
            printf("%s is not a multiple of 9.\n", num);
        } else {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", num, deg);
        }
    }
    return 0;
}
