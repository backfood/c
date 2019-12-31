#include <stdio.h>
int main()
{
    int price=8;
    printf("请输入中文\n");//乱码问题详见 readme
   scanf("%d",&price);
   printf("%d" ,price);
    return 0; 
}
 