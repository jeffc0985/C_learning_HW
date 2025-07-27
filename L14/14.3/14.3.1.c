#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* p_next;
};
typedef struct node NODE;
typedef NODE* NODEp;

NODEp CreateList(int*,int);
void PrintList(NODEp);
NODEp SearchNode(NODEp,int);
void InsertNode(NODEp,int);
NODEp insert_first_node(NODEp,int);
NODEp DeleteNode(NODEp,int);
int ListLen(NODEp);
void CombineList(NODEp,NODEp);
void FreeList(NODEp);

int main()
{
    int arr[] = {12,43,56,34,98,76,43,24};
    int len = sizeof(arr)/sizeof(int);
    
    NODEp first = CreateList(arr,len);
    PrintList(first);

    NODEp node = SearchNode(first,56);

    if(node == NULL)
        printf("insert failed\n");
        else
        InsertNode(node,88);

    PrintList(first);
    
    first = insert_first_node(first,58);
    PrintList(first);
    
    
    first = DeleteNode(first,58);   
    first = DeleteNode(first,34);    
    first = DeleteNode(first,24);
    
    PrintList(first);

    int arr2[] = {15,44,58,101,9};
    NODEp first_2 = CreateList(arr2,sizeof(arr2)/sizeof(int));
    PrintList(first_2);

    CombineList(first,first_2);

    PrintList(first);
    FreeList(first);

    return 0;
}

NODEp CreateList(int* arr, int len)
{
    NODEp p_first, p_current, p_previous;
    
    
    int i;
    for(i=0 ; i<len ; i++)
    {
        p_current = (NODEp) malloc(sizeof(NODE));
        p_current->data = *(arr+i);
        
        if(i == 0)
            p_first = p_current;
        else
        p_previous->p_next = p_current;
        
        p_previous = p_current;
        p_current->p_next = NULL;
    }

    return p_first;
}

void PrintList(NODEp p_first)
{
    NODEp p_current = p_first;
    
    if(p_first == NULL)
    {
        printf("link is empty!\n");
    }
    else
    {
        while(p_current != NULL)
        {
            printf("%d ",p_current->data);
            p_current = p_current->p_next;
        }
    }

    printf(" len=%d\n",ListLen(p_first));
}

NODEp SearchNode(NODEp p_first,int item)
{
    NODEp p_current = p_first;
    while (p_current != NULL)
    {
        if(p_current->data == item)
        return p_current;
        
        p_current = p_current->p_next;
    }
    
    printf("no data\n");
    return NULL;
}

void InsertNode(NODEp p_node,int item)
{
    NODEp newnode = (NODEp) malloc(sizeof(NODE));
    newnode->data = item;
    
    newnode->p_next = p_node->p_next;
    p_node->p_next = newnode;
}

NODEp insert_first_node(NODEp p_first,int item)
{
    NODEp newnode = (NODEp) malloc(sizeof(NODE));
    newnode->data = item;
    
    newnode->p_next = p_first; 
    p_first = newnode;
    
    return p_first;
}

NODEp DeleteNode(NODEp p_first, int item)
{
    NODEp p_current = p_first;
    if(p_first == NULL)
    {
        printf("nothing to delete\n");
        return NULL;
    }

    if(p_first->data == item)     //要刪除的為第一個
    {
        p_first = p_first->p_next;
        free(p_current);
        
        return p_first;
    }
    else
    {
        while (p_current != NULL)   //走訪
        {
            if(p_current->p_next->data == item)     //如果下一個要刪除
            {
                NODEp p_temp = p_current->p_next;
                p_current->p_next = p_current->p_next->p_next;
                free(p_temp);

                return p_first;
            }

            p_current = p_current->p_next;

            //倒數第一個仍不是
            if(p_current->p_next == NULL)
            {
                printf("no data\n");
                return p_first;
            }

        }       
    }
}

int ListLen(NODEp p_first)
{
    NODEp p_current = p_first;
    int cnt = 0;

    while (p_current != NULL)
    {
        p_current = p_current->p_next;
        cnt += 1;
    }
    
    return cnt;
}

void CombineList(NODEp p_first_1, NODEp p_first_2)
{
    NODEp p_current = p_first_1;

    while (p_current != NULL)
    {
        p_current = p_current->p_next;

        if(p_current->p_next == NULL)   //到低一個串列的最後一個
            break;
    }

    p_current->p_next = p_first_2;
}

void FreeList(NODEp p_first)
{
    NODEp p_current = p_first, p_temp;
    while (p_current != NULL)
    {
        p_temp = p_current;
        p_current = p_current->p_next;

        free(p_temp);
    }
    
}
