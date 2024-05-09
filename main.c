#include <stdio.h>
#include <string.h>

void swapPairs(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i += 2) {
        if (str[i] != ' ' && str[i + 1] != ' ') {
            char temp = str[i];
            str[i] = str[i + 1];
            str[i + 1] = temp;
        }
    }
}

void removeExtraSpaces(char *str) {
    int i, j;
    int len = strlen(str);
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

void changeExtension(char *str) {
    char *dot = strrchr(str, '.');
    if (dot) {
        strcpy(dot, ".html");
    } else {
        strcat(str, ".html");
    }
}

int main() {
    char input1[] = "Hello world!";
    swapPairs(input1);
    printf("Результат задачи 1: %s\n", input1);

    char input2[] = "  Hello    world!  ";
    removeExtraSpaces(input2);
    printf("Результат задачи 2: %s\n", input2);

    char input3[] = "/DOC.TXT/qqq";
    changeExtension(input3);
    printf("Результат задачи 3: %s\n", input3);

    return 0;
}
