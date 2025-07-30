#include <stdio.h>
#include <string.h>
#include <ctype.h>

char keywords[33][10] = {
    "int", "float", "char", "double", "if", "else", "for", "while",
    "do", "return", "break", "continue", "switch", "case", "default",
    "void", "long", "short", "signed", "unsigned", "sizeof", "struct",
    "union", "typedef", "enum", "static", "const", "goto", "auto",
    "extern", "register", "volatile", "main"
};

int isKeyword(char *word) {
    for (int i = 0; i < 33; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' ||
           ch == '<' || ch == '>' || ch == '!';
}

int main() {
    FILE *fp;
    char ch, buffer[50];
    int i = 0;

    fp = fopen("../INPUT/input.c", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Lexical Analysis Output:\n\n");

    while ((ch = fgetc(fp)) != EOF) {
        if (isalnum(ch) || ch == '_') {
            buffer[i++] = ch;
        } else {
            buffer[i] = '\0';
            i = 0;

            if (strlen(buffer) > 0) {
                if (isKeyword(buffer))
                    printf("[Keyword]     %s\n", buffer);
                else
                    printf("[Identifier]  %s\n", buffer);
            }

            if (isOperator(ch)) {
                printf("[Operator]    %c\n", ch);
            }
        }
    }

    fclose(fp);
    return 0;
}
