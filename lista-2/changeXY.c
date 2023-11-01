#include <stdio.h>

void changeXY(char txt[], int i){
    if (txt[i] == '\0') {
        return;
    }
    if (txt[i] == 'x'){
        txt[i] = 'y';
    }
    changeXY(txt, i+1);
}

int main(){
    char txt[81];
    scanf("%s", txt);

    changeXY(txt,0);

    printf("%s\n", txt);


    return 0;
}