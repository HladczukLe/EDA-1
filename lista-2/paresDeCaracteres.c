#include <stdio.h>

int pairsCount(const char txt[], int count, int i){
    if (txt[i] == '\0' || txt[i+1] == '\0') {
        return count;
    }
    
    if (txt[i] == txt[i+2]){
        count++;
    }
    
    return pairsCount(txt, count, i+1);
}
int main(){
    char txt[201];
    scanf("%s", txt);

    int result = pairsCount(txt,0,0);
    printf("%d\n", result);

    return 0;
}