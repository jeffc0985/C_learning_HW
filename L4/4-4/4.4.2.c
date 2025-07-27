#include <stdio.h>
#include <conio.h>

int main()
{
    char ch, ch2;

    printf("輸入一個字元:");
    ch =getche();
    putchar('\n');
    putchar(ch);
    putchar('\n');

    printf("輸入第二個字元:");
    ch2 = getch();
    putchar('\n');
    putchar(ch2);

    return 0;
}