#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;
//push
void push(){
    int item;
    printf("\nEnter element to insert: ");
    scanf("%d", &item);
    if(top == MAX-1)
        printf("Stack overflow!!");
    else{
        printf("Element is inserted\n");
        top++;
        stack[top] = item;
    }
}
//pop
void pop(){
    int data;
    if(top == -1)
        printf("Stack underflow!!");
    else{
        data = stack[top];
        printf("The deleted element is: %d\n", data);
        top--;
    }
}
//display
void display(){
    int i;
    if(top == -1)
        printf("Stack is empty!!\n");
    else{
        printf("Elements are: ");
        for(i = top; i >= 0; i--){
            printf("%d ", stack[i]);
        }
    }
}
//peek
void peek(){
    if(top == -1)
        printf("Stack is empty!!");
    else
        printf("The element is: %d\n",stack[top]);
}
int main()
{
    int ch;
    while(1){
    printf("\nEnter your choice:\n");
    printf("1 to push\n2 to pop\n3 to display\n4 to peek!\n5 to exit\n");
    scanf("%d", &ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice!");
        }
    }
    return 0;
}