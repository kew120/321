#include <stdio.h>

int main(){
    char *a = "안녕하세요\0방가방가";
    printf("%s",a);

    a = "hello";
    printf("%s", a[0-2]);
    return 0;
}