#include <stdio.h>
#include <string.h>

void reverseString(char *txt, int len, int i){
    if (i == len) {
        return;
    }
    else{
        reverseString(txt+1, len, i+1);
        printf("%c", *txt);
    }
    
}

int main(){
    char txt[501];
    scanf("%s",txt);
    int len = strlen(txt);

    reverseString(txt,len,0);

    return 0;
}