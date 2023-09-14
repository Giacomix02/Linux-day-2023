#include <stdio.h>

int main(){
    int primo;
    char segno;
    int secondo;

    scanf("%i",&primo);
    scanf("%c",&segno);
    scanf("%i",&secondo);

    if(segno == '+'){
        printf("= \n%i",primo+secondo);
    }
    if(segno == '-'){
        printf("=\n%i",primo-secondo);
    }
    if(segno == '*'){
        printf("=\n%i",primo*secondo);
    }
    if(segno == '/'){
        printf("=\n%i",primo/secondo);  //potrebbero verificarsi undefined behaviour
    }
    
}