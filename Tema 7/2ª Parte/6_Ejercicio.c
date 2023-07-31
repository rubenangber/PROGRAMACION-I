#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int index1 = 0, index2 = 0;
    int i, j, k, n1, n2;
    char temp;
    int areAnagrams;

    printf("Ingrese la primera cadena >> ");
    gets(str1);
    
    printf("Ingrese la segunda cadena >> ");
    gets(str2);

    for (i = 0; str1[i]; i++) {
        if (!isspace(str1[i]) && !ispunct(str1[i])) {
            str1[index1++] = tolower(str1[i]);
        }
    }
    str1[index1] = '\0';

    for (i = 0; str2[i]; i++) {
        if (!isspace(str2[i]) && !ispunct(str2[i])) {
            str2[index2++] = tolower(str2[i]);
        }
    }
    str2[index2] = '\0';
    
    n1 = strlen(str1);
    n2 = strlen(str2);
    for (i = 0; i < n1 - 1; i++) {
        for (j = i + 1; j < n1; j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    for (i = 0; i < n2 - 1; i++) {
        for (j = i + 1; j < n2; j++) {
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    areAnagrams = (strcmp(str1, str2) == 0);

    if (areAnagrams) {
        printf("Las cadenas son anagramas\n");
    } else {
        printf("Las cadenas no son anagramas\n");
    }

    return 0;
}
