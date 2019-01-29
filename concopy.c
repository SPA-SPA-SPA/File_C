/*直接输出玩家输入的字符*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ch;
    while((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}

/*ctrl+C可以结束输入，在UNIX中使用的是ctrl+D*/