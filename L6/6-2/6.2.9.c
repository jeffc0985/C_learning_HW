// 找錢
#include <stdio.h>

int main()
{
    int pay, price;
    int one = 0, five = 0, ten = 0, fifty = 0, hundred = 0, f_hundred = 0, thousand = 0;
    
    printf("請輸入應付金額:");
    scanf("%d",&price);
    printf("請輸入付款金額:");
    scanf("%d",&pay);

    int total = pay-price;
    int change = pay-price;

    if (change<0)
        printf("錢不夠!");

    if (change==0)
        printf("不用找錢!");

    if (change>0)
    {
        if (change>=1000)
            {   thousand = change/1000;
                change = change-(thousand*1000);
                f_hundred = change/500;
                change = change-(500*f_hundred);
                hundred = change/100;
                change = change-(100*hundred);
                fifty = change/50;
                change = change-50*fifty;
                ten = change/10;
                change = change-(10*ten);
                five = change/5;
                change = change-(5*five);
                one = change;
            }
        else if (change>=500 && change<1000)
                {
                    f_hundred = change/500;
                    change = change-(500*f_hundred);
                    hundred = change/100;
                    change = change-(100*hundred);
                    fifty = change/50;
                    change = change-50*fifty;
                    ten = change/10;
                    change = change-(10*ten);
                    five = change/5;
                    change = change-(5*five);
                    one = change;
                }
                
            else if (change>=100 && change<500)
                    {
                        hundred = change/100;
                        change = change-(100*hundred);
                        fifty = change/50;
                        change = change-50*fifty;
                        ten = change/10;
                        change = change-(10*ten);
                        five = change/5;
                        change = change-(5*five);
                        one = change;
                    }
                else if (change>=50 && change<100)
                        {
                            fifty = change/50;
                            change = change-50*fifty;
                            ten = change/10;
                            change = change-(10*ten);
                            five = change/5;
                            change = change-(5*five);
                            one = change;
                        }
                    else if (change>=10 && change<50)
                            {
                                ten = change/10;
                                change = change-(10*ten);
                                five = change/5;
                                change = change-(5*five);
                                one = change;
                            }
                        else if (change>=5 && change<10)
                                {
                                    five = change/5;
                                    change = change-(5*five);
                                    one = change;
                                }
                            else if (change>0 && change<5)
                                    one = change;
                                
    printf("要找%d張1000元,\n%d張500元,\n%d張100元,\n%d個50元,\n%d個10元,\n%d個5元,\n%d個1元,\n共%d元",thousand,f_hundred,hundred,fifty,ten,five,one,total);
    } 
    
    return 0;
}