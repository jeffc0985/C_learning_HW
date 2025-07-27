//輸入成績及統計人數
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int i = 0;
    int score;

    start:
        i++;
        if (i<=10)
            {
                reinput:   
                printf("請輸入學生成績:");
                scanf("%d",&score);

                if (score>75 && score<=100)
                    {
                        printf("等第為'A'\n");
                        a++;
                    }
                else if (score<=75 && score>=60)
                    {
                        printf("等第為'B'\n");
                        b++;
                    }
                    else if (score<60 && score>=0)
                        {
                            printf("等第為'C'\n");
                            c++;
                        }
                        else 
                            {
                                printf("輸入錯誤,請重新輸入!\n");
                                goto reinput;
                            }

                goto start;

            }


        printf("'A'共有%d位\n",a);
        printf("'B'共有%d位\n",b);
        printf("'C'共有%d位\n",c);


    return 0;
}