#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char c) {
    stack[++top] = c; // push
}

char pop() {
    return stack[top--]; // pop
}

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++) {
        push(str[i]);
    }

    printf("Reversed: ");
    while(top != -1) {
        printf("%c", pop());
    }

    return 0;
}