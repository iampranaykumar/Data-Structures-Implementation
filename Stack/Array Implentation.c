#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 8
int top = -1;
void StackPush();
void StackPop();
void peek();
void Display();
void full();
void empty();

int main()
{
    int a[N];
    int choice;
    while(1)
    {
        printf("\nChoose the operation -\n1.Push\t2.Pop\t3.Peek\n4.Dispaly\t5.Is empty\t6.Is full\n7.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: StackPush(a); break;
            case 2: StackPop(a); break;
            case 3: peek(a); break;
            case 4: Display(a); break;
            case 5: empty(a); break;
            case 6: full(a); break;
            case 7: exit(0);
            default: printf("Choose the correct option \n");
        }
    }
    return 0;
}

void StackPush(int a[])
{
    int i;
    if(top == N-1)
    {
        printf("\nNo Extra space is available in the stack");
    }
    else
    {
        printf("Enter an element -\n");
        scanf("%d",&i);
        top+=1;
        a[top] = i;
    }
}

void StackPop(int a[])
{
    int b;
    if(top == -1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        b = a[top];
        printf("Removing %d from the stack",b);
        top-=1;
    }
}

void peek(int a[])
{
    printf("The top element is %d",a[top]);
}

void full(int a[])
{
    if(top == N-1)
    {
        printf("Stack is full\n");
    }
    else
        printf("No stack is not full \n");
}

void empty(int a[])
{
    if(top == -1 || top < N-1)
        printf("Stack is empty\n");
    else
        printf("Stack is full\n");
}

void Display(int a[])
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d \t",a[i]);
    }
}
