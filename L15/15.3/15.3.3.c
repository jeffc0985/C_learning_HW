#include <stdio.h>

int main()
{
    struct computer
    {
        unsigned floppy : 3;
        unsigned hard_disk : 6;
        unsigned cd_rom : 6;
        unsigned printer : 5;
    }company;
    
    unsigned data[4];

    printf("請輸入軟碟數目:");
    scanf("%d",&data[1]);
    printf("請輸入硬碟數目:");
    scanf("%d",&data[2]);
    printf("請輸入光碟機數目:");
    scanf("%d",&data[3]);
    printf("請輸入印表機數目:");
    scanf("%d",&data[4]);

    company.floppy = data[1];
    company.hard_disk = data[2];
    company.cd_rom = data[3];
    company.printer = data[4];

    printf("company:\n");
    
    
    printf("軟碟數目:%d\n",company.floppy);
    printf("硬碟數目:%d\n",company.hard_disk);
    printf("光碟機數目:%d\n",company.cd_rom);
    printf("印表機數目:%d\n",company.printer);

    printf("sizeof(company)=%d",sizeof(company));  //4

    return 0;
}