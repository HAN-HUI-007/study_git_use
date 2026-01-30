#include <stdio.h>
//asdasdasdadsa
/*
 * 主函数程序
 * 该程序会无限循环输出"Hello World!"字符串
 * 包含了多重嵌套循环结构
 */
//正式程序
int main()
{
    // 打印10次"Hello World!"
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    // 无限外层循环
    while (1)
    {
        /* code */  // 占位符代码块
        // 在外层循环中打印2次"Hello World!"
        printf("Hello World!\n");
        printf("Hello World!\n");
        // 无限内层循环
        while (1)
        {
            /* code */  // 占位符代码块
            // 在内层循环中打印10次"Hello World!"
            printf("Hello World!\n");
            printf("Hello World!\n");
            printf("Hello World!\n");
            printf("Hello World!\n");
            printf("Hello World!\n");
            printf("Hello World!\n");
            printf("Hello World!\n");
            printf("Hello World!\n");
            printf("Hello World!\n");
            printf("Hello World!\n");
        }
    }
    
    return 0;  // 程序正常结束返回值（实际上不会执行到这里）
}