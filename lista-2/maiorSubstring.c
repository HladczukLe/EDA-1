#include <stdio.h>
#include <string.h>

int maiorSubstring(char str[], char sub[], int str_len, int sub_len) {
    if (str_len < sub_len)
        return 0;

    if (strncmp(str, sub, sub_len) == 0 && strncmp(str + (str_len - sub_len), sub, sub_len) == 0)
        return str_len;

    int op1 = maiorSubstring(str + 1, sub, str_len - 1, sub_len);
    int op2 = maiorSubstring(str, sub, str_len - 1, sub_len);

    return (op1 > op2) ? op1 : op2;
}

int main() {
    char str[101];
    char sub[101];

    fgets(str, sizeof(str), stdin);
    fgets(sub, sizeof(sub), stdin);

    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    int str_len = strlen(str);
    int sub_len = strlen(sub);

    int resultado = maiorSubstring(str, sub, str_len, sub_len);
    printf("%d\n", resultado);

    return 0;
}
