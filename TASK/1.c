#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX];
int minArr=9999999999;
int top = -1;


int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX-1;
}


void push(int x) {
    if (isFull()) {
        printf("Stack overflow\n");
        return;
    }
    arr[++top] = x;

    if (isEmpty()) {
        minArr= x;
    } else {
        minArr= (x < minArr) ? x : minArr;
    }
}

void pop() {
    int x;
    if (isEmpty()) {
        printf("Stack underflow\n");
        return;
    }
    if(minArr==arr[top]){

    top--;
     x=arr[top];
    minArr=9999999999;
    minArr= (x < minArr) ? x : minArr;
    }
}

int getTop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return ;
    }
    return arr[top];
}


int findMin() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }
    return minArr;
}


int main() {
    push(3);
    push(5);
    printf("Min: %d\n", findMin());
    push(2);
    push(1);
    pop();
    printf("Min: %d\n", findMin());
    pop();
    printf("Min: %d\n", findMin());

    return 0;
}
