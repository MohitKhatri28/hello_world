#include <stdio.h>
#include <string.h>
#include "../include/59_myfile.h"

int main() {
    char str[100];
    char c;
    printf("Input character: \n");
    scanf("%c\n",&c);
    printf("Input string: \n");
    scanf("%[^\n]s",str);
    
    
    char *ptr=NULL;
    ptr = sgs_clib_strrchr(str,c);
    printf("Address of character is: %p",ptr);

    return 0;
}
