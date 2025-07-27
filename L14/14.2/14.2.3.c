#include <stdio.h>

struct node
{
    int data;
    struct node* p_next;
}*p_first;
typedef struct node NODE;

int main()
{
    NODE a, b, c, d;

    p_first = &a;

    a.data = 12;
    a.p_next = &b;

    b.data = 38;
    b.p_next = &c;

    c.data = 64;
    c.p_next = &d;

    d.data = 37;
    d.p_next = NULL;

    printf("串列為:");
    while(p_first != NULL)
    {
        printf("%d ",p_first->data);
        p_first = p_first->p_next;
    }


    p_first = &a;

    NODE new;
    new.data = 92;
    new.p_next = &c;
    b.p_next = &new;

    printf("\n插入92到第二個數之後後,串列為:");
    while(p_first != NULL)
    {
        printf("%d ",p_first->data);
        p_first = p_first->p_next;
    }




    p_first = &a;   //初始化
    
    a.p_next = &new;  //刪除b

    printf("\n刪除第二個數後,串列為:");
    while(p_first != NULL)
    {
        printf("%d ",p_first->data);
        p_first = p_first->p_next;
    }

    return 0;
}