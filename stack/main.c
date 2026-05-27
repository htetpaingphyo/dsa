#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct stack
{
    int data[MAX];
    int top;
};

bool is_empty(struct stack *s)
{
    return s->top == -1;
}

bool is_full(struct stack *s)
{
    return s->top == MAX - 1;
}

int push(struct stack *s, int value)
{
    if (is_full(s))
    {
        printf("Stack is full.\n");
        return -1;
    }

    s->data[++s->top] = value;
    return s->top;
}

int pop(struct stack *s)
{
    if (is_empty(s))
    {
        printf("Stack is empty.\n");
        return -1;
    }

    return s->data[s->top--];
}

struct stack *init_stack(void)
{
    struct stack *s;
    s = malloc(sizeof(*s));
    if (!s)
    {
        printf("malloc failed.\n");
        exit(1);
    }
    s->top = -1;
    return s;
}

void print_stack(struct stack *s)
{
    int i;
    for (i = s->top; i >= 0; i--)
        printf("%d%c", s->data[i], i == 0 ? '\n' : ' ');
}

int main(void)
{
    struct stack *s = init_stack();
    int i;

    push(s, 10);
    push(s, 20);
    push(s, 30);

    printf("After pushing 10, 20, 30:\n");
    print_stack(s);

    pop(s);
    printf("\nAfter popping:\n");
    print_stack(s);

    push(s, 500);
    printf("\nAfter pushing 500 again:\n");
    print_stack(s);

    printf("\n");
    free(s);
    return 0;
}
