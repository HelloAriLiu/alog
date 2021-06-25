#include "alog_printf.h"

int main(void)
{
    alog_printf(ALOG_LVL_DEBUG, TURE,"\n*********************************TEST START**************************************\n");
    int a = 0;

    while (1)
    {
        alog_printf(ALOG_LVL_DEBUG, TURE, "test a=%d \n", a);
        a++;
        sleep(1);
    }

    return 0;
}
