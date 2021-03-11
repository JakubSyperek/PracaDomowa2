#include <stdio.h>
#define LITERY 26
int main(void)
{
    char znaki[LITERY];
    int i;

    for (i=0;i<LITERY;i++)
    {
        znaki[i]='a'+i;
    }
    for (i=0;i<LITERY;i++)
    {
        printf("%c",znaki[i]);
    }
    printf("\n");
    return 0;
}
