#include <stdio.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;  
void push(char c) {
    if (top<MAX_SIZE-1) {
        stack[++top]=c;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

// Function to check if the stack is empty
char isEmpty() {
    return (top == -1);
}
int isValidParentheses(const char *str) {
    while (*str) {
        char c = *str++;
        switch (c) {
            case '(': case '{': case '[':
                push(c);
                break;
            case ')':
                if (isEmpty() || pop() != '(') {
                    return 0; // Invalid
                }
                break;
            case '}':
                if (isEmpty() || pop() != '{') {
                    return 0; // Invalid
                }
                break;
            case ']':
                if (isEmpty() || pop() != '[') {
                    return 0; // Invalid
                }
                break;
            // Ignore other characters
        }
    }

    return isEmpty() ? 1 : 0;
}

int main() {
    const char *expr1 = "[{(a + b) * (c + d)}]";
    const char *expr2 = "[{(a + b) * (c + d)]}";

    printf("Expression 1 is %s\n", isValidParentheses(expr1)?"valid": "invalid");
    printf("Expression 2 is %s\n", isValidParentheses(expr2)?"valid": "invalid");

    return 0;
}
