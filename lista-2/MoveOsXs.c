#include <stdio.h>
#include <string.h>

void moveX(char text[], int len, int index){
    if (index == len){
        return;
    }

    if (text[index] == 'x'){
        memmove(&text[index], &text[index + 1], (len - index - 1) * sizeof(char));
        text[len - 1] = 'x';
        moveX(text, len - 1, index);

    }
    else{
        moveX(text, len, index+1);

    }
    
}

int main(){
    char text[1001];
    scanf("%s", text);

    int len = strlen(text);
    moveX(text,len,0);
    
    printf("%s\n", text);


    return 0;
}