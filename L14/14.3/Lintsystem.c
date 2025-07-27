#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node* p_next;
}*first[10] = {NULL}, *node = NULL;
typedef struct node NODE;

NODE* CreateList(int*, int);
void PrintList(NODE*);
void FreeList(NODE*);
NODE* SearchNode(NODE*, int);
NODE* InsertNode(NODE*, int, int, int);
NODE* DeleteNode(NODE*, int);
int ListLen(NODE*);

int list_idx = 0, list_cnt = 0;    //關乎first指標陣列 //list_idx用於case 1找空隙建立
int main()
{
    int i, len, num, cmd, yn;
    int pos = 1;

    printf("歡迎來到串列系統!\n");

    do
    {
        printf("請選擇欲進行的操作:\n");
        printf("0.退出\n1.建立新串列\n2.列印串列\n3.檢視所有串列\n4.搜尋數據\n5.插入數據\n6.刪除數據\n7.計算串列長度\n8.清空串列\n9.清空所有串列  ");
        scanf("%d",&cmd);

        if(cmd == 0)
        {
            printf("謝謝惠顧!");
            return 0;
        }

        if(cmd < 0 || cmd > 9)
            printf("\n格式錯誤!請重試\n\n");
        
    } while (cmd < 0 || cmd > 9);

    
    if(first[0] == NULL && cmd != 0 && cmd != 1)    //剛開始沒有先建立串列
    {
        printf("\n串列目前為空,是否先建立串列?\n");
        printf("0.否\n1.是  ");
        scanf("%d",&yn);
        

        while (yn != 0 && yn != 1)
        {
            printf("\n輸入錯誤!請重試!\n");
            printf("0.否\n1.是\n");
            scanf("%d",&yn);

            if(yn == 0 || yn == 1)
                break;
        }

        if(yn == 1)
            cmd = 1;     
    }

    while (1)
    { 
        switch (cmd)
        {
            case 0:     //退出
            {
                for(i=0 ; i<10 ; i++)
                    FreeList(first[i]);     //釋放所有串列
                
                printf("謝謝惠顧!");
                return 0;               
            }
    
            case 1:     //建立新串列
            {
                if(list_cnt == 10)
                {
                    printf("\n串列數已達上限!請先清除串列!\n");
                    break;
                }

                do
                {
                    printf("\n請輸入數據數量:");
                    scanf("%d",&len);

                    if(len <= 0)
                        printf("數量格式錯誤!請重新輸入!\n");

                } while (len <= 0);
                
                
                int arr[len];
                
                for(i=0 ; i<len ; i++)
                {
                    printf("請輸入第%d筆數據:",i+1);
                    scanf("%d",&arr[i]);
                }
                
                list_idx = 0;       //list_idx初始化,找第一個空串列新建
                for(i=0 ; i<10 ; i++)
                {
                    if(first[list_idx] == NULL)
                    {
                        first[list_idx] = CreateList(arr,len);
                        break;
                    }
                    else
                        list_idx += 1;                    
                }

                printf("\n串列建立成功!\n");

                list_cnt += 1;

                break;
            }
                
            case 2:     //列印串列
            {
                int idx;
                do
                {
                    printf("請選擇要列印的串列編號:");
                    scanf("%d",&idx);

                    if(idx < 0 || idx > 9)
                        printf("編號不符合規範!請重新輸入!\n");
                } while (idx < 0 || idx > 9);

                printf("\n串列為:");
                PrintList(first[idx]);
                printf("列印成功!\n");

                break;
            }

            case 3:     //列印所有串列
            {
                int i;
                char ch;
                printf("\n");

                for(i=0 ; i<10 ; i++)
                {
                    printf("串列%d為:",i);
                    PrintList(first[i]);
                }
                printf("...請按任意鍵繼續");
                while ((ch = getch()) != '\0')      //暫停看串列
                {
                    printf("\n");
                    break;
                }

                break;
            }
            
            case 4:     //尋找數據
            {
                if(list_cnt == 0)   //如果沒有數據
                {
                    printf("\n所有串列皆為空!沒有數據!\n");
                    break;
                }

                int idx;
                printf("\n");
                do
                {
                    printf("請選擇要搜尋的數據之串列編號:");
                    scanf("%d",&idx);

                    if(idx < 0 || idx > 9)
                        printf("編號不符合規範!請重新輸入!\n");
                } while (idx < 0 || idx > 9);

                if(first[idx] == NULL)
                {
                    printf("\n串列%d為空!請先建立串列!\n",idx);
                    break;
                }

                printf("\n請輸入要尋找的數據:");
                scanf("%d",&num);
                node = SearchNode(first[idx],num);
                break;
            }    
                
            case 5:     //插入數據
            {
                int idx;
                do
                {
                    printf("請選擇要插入的數據之串列編號:");
                    scanf("%d",&idx);

                    if(idx < 0 || idx > 9)
                        printf("編號不符合規範!請重新輸入!\n");
                } while (idx < 0 || idx > 9);

                if(first[idx] == NULL)  //串列為空時默認插第一個並建立一個新串列
                {
                    printf("\n串列%d目前為空!\n",idx);
                    list_cnt += 1;
                    pos = 1;
                }
                else
                {
                    printf("\n串列為:");
                    PrintList(first[idx]);
                }

                printf("請輸入要插入的數據:");
                scanf("%d",&num);

                if(first[idx] != NULL)
                {
                    printf("請輸入插入位置:");
                    scanf("%d",&pos);
                }

                first[idx] = InsertNode(first[idx],pos,num,ListLen(first[idx]));
    
                printf("\n串列為:");
                PrintList(first[idx]);
                break;
            }

            case 6:     //刪除數據
            {
                if(list_cnt == 0)       //如果沒有數據
                {
                    printf("\n所有串列皆為空!沒有數據可刪除!\n");
                    break;
                }

                int idx;
                do
                {
                    printf("\n請選擇要刪除的數據之串列編號:");
                    scanf("%d",&idx);

                    if(idx < 0 || idx > 9)
                        printf("編號不符合規範!請重新輸入!\n");
                } while (idx < 0 || idx > 9);        

                if(first[idx] == NULL)  //如果串列n沒有數據
                {
                    printf("\n串列%d已經為空!\n",idx);
                    break;
                }
                else
                {   
                    printf("\n串列為:");
                    PrintList(first[idx]);
                    printf("請輸入要刪除的數據:");
                    scanf("%d",&num);

                    first[idx] = DeleteNode(first[idx],num);
                    printf("\n串列為:");
                    PrintList(first[idx]);
                }
                break;
            }
            
            case 7:     //計算長度
            {                
                int idx;
                do
                {
                    printf("請選擇要計算之串列編號:");
                    scanf("%d",&idx);
                    
                    if(idx < 0 || idx > 9)
                    printf("編號不符合規範!請重新輸入!\n");
                } while (idx < 0 || idx > 9);
                
                printf("\n串列%d長度為:%d\n",idx,ListLen(first[idx]));
                break;
            }
            
            case 8:     //清除一個串列
            {
                if(list_cnt == 0)
                {
                    printf("\n所有串列已為空!\n");
                    break;
                }

                int idx;
                do
                {
                    printf("請選擇要清空之串列編號:");
                    scanf("%d",&idx);
                    
                    if(idx < 0 || idx > 9)
                    printf("編號不符合規範!請重新輸入!\n");
                } while (idx < 0 || idx > 9);

                if(first[idx] == NULL)
                {
                    printf("\n串列%d已經為空!\n",idx);
                    break;
                }
                
                FreeList(first[idx]);
                first[idx] = NULL;
                
                printf("\n串列%d清除成功!\n",idx);
                list_cnt -= 1;
                
                break;
            }
            
            case 9:     //清除所有串列
            {              
                for(i=0 ; i<10 ; i++)
                {
                    FreeList(first[i]);
                    first[i] = NULL;
                }

                printf("\n所有串列已清空!\n");
                list_cnt = 0;
                
                break;
            }

            default:
                printf("\n格式錯誤!請重新輸入!\n");
                break;
        }

        printf("\n請選擇接下來的操作:(目前串列數:%d/10)\n",list_cnt);
        printf("0.退出\n1.建立新串列\n2.列印串列\n3.檢視所有串列\n4.搜尋數據\n5.插入數據\n6.刪除數據\n7.計算串列長度\n8.清空串列\n9.清空所有串列  ");
        scanf("%d",&cmd);
    }
  
    return 0;
}

//1.建立節點 2.輸入數據 3.串接節點 4.移動指標 5.收尾
NODE* CreateList(int* arr, int len)
{
    int i;
    NODE *p_current, *p_first, *p_previous;
    
    for(i=0 ; i<len ; i++)
    {
        p_current = (NODE*) malloc(sizeof(NODE));
        p_current->data = arr[i];
        
        if(i == 0)
            p_first = p_current;
        else
            p_previous->p_next = p_current;
        
        p_previous = p_current;
        p_current->p_next = NULL;
    }
    
    return p_first;        
}

//1.判定資料數 2.走訪(列印、移動指標)
void PrintList(NODE* p_first)
{
    int i;
    NODE* p_current = p_first;
    
    if(p_first == NULL)
        printf("NULL");
     
    while (p_current != NULL)
    {
        printf("%d ",p_current->data);
        p_current = p_current->p_next;
    }
    
    printf("\n");
    
}

//走訪:(1.暫存目前 2.移動指標 3.釋放暫存)
void FreeList(NODE* p_first)
{
    NODE *p_temp, *p_current = p_first;
    
    while (p_current != NULL)
    {
        p_temp = p_current;         //1.
        p_current = p_current->p_next;  //2.
        free(p_temp);               //3.
    }
}


NODE* SearchNode(NODE* p_first, int item)
{
    int pos = 1;    //從第一個走訪比對
    NODE* p_current = p_first;
    
    while (p_current != NULL)
    {
        if(p_current->data == item)
        {
            printf("找到了!數據位於第 %d 個節點\n",pos);
            return p_current;
        }
        
        p_current = p_current->p_next;
        pos += 1;
    }
    
    printf("\n沒有符合數據!\n");
    return NULL;        //如果都沒找到
}


NODE* InsertNode(NODE* p_first, int pos, int item, int len)
{
    if(pos < 1 || pos > len+1)
    {
        printf("\n插入失敗!位置格式錯誤!");
        return p_first;
    }
    
    NODE* p_newnode = (NODE*) malloc(sizeof(NODE));
    NODE* p_current = p_first;
    p_newnode->data = item;
    int i;

    if(pos == 1)
    {
        p_newnode->p_next = p_first;
        p_first = p_newnode;
        printf("\n插入成功!");

        return p_first;
    }
    else
        if(pos == 2)
        {
            p_newnode->p_next = p_first->p_next;
            p_first->p_next = p_newnode;
            printf("\n插入成功!");

            return p_first;
        }
        else
        {
            for(i=1;i<pos-1;i++)
            {
                p_current = p_current->p_next;
            }
            p_newnode->p_next = p_current->p_next;
            p_current->p_next = p_newnode;
            printf("\n插入成功!");

            return p_first;
        }
    
}


NODE* DeleteNode(NODE* p_first, int item)
{
    NODE* p_current = p_first;
    if(p_first == NULL)
    {
        return NULL;
    }

    if(p_first->data == item)     //要刪除的為第一個
    {
        if(p_first->p_next == NULL)     //剩最後一個要刪除
        {
            free(p_current);
            printf("\n刪除成功!");
            list_cnt -= 1;

            return NULL;
        }

        p_first = p_first->p_next;
        free(p_current);
        printf("\n刪除成功!");
        
        return p_first;
    }
    else
    {
        while (p_current != NULL)   //走訪
        {
            if(p_current->data != item && p_current->p_next == NULL)    //剩一個數據然後輸錯
            {
                printf("\n刪除失敗!沒有符合的數據!");
                return p_first;
            }

            if(p_current->p_next->data == item)     //如果下一個要刪除
            {
                NODE* p_temp = p_current->p_next;
                p_current->p_next = p_current->p_next->p_next;
                free(p_temp);
                printf("\n刪除成功!");

                return p_first;
            }

            p_current = p_current->p_next;

            //倒數第一個仍不是
            if(p_current->p_next == NULL)
            {
                printf("\n刪除失敗!沒有符合的數據!");
                return p_first;
            }

        }       
    }
}


int ListLen(NODE* p_first)
{
    NODE* p_current = p_first;
    int cnt = 0;

    while (p_current != NULL)
    {
        p_current = p_current->p_next;
        cnt += 1;
    }
    
    return cnt;
}