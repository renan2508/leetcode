#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    
    int index=0;
    if(strlen(needle) > strlen(haystack) || strlen(needle) == 0){
        return -1;
    }
    char *pHaystack = haystack;

    while(*pHaystack != '\0'){
        char *pNeedle = needle;
        char *pCurrentHaystack = pHaystack;
        while(*pNeedle != '\0' && *pNeedle == *pCurrentHaystack){
            pCurrentHaystack++;
            pNeedle++;
        }
        if(*pNeedle == '\0'){
            return index;
        }
        index++;
        pHaystack++;
    }
    return -1;
}

int main(){

    char haystack[100] = "mississippi";
    char needle[100] = "issip";
    printf("%d", strStr(haystack, needle));
    return 0;
}