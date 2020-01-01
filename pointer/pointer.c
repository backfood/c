#include <stdio.h>
int main(){
    // 取值
    int a=333;
    int *p1=&a;
    printf("*p的值为%d，p的值为%d",*p1,p1);
    // 赋值
    int b=2222;
    int c=4444;
    int *p2=&b;
    printf("赋值前*p2的值%d,p2的地址%d",*p2,p2);//赋值前*p2的值2222,p2的地址6422288
    p2=&c;
    printf("赋值后*p2的值%d,p2的地址%d",*p2,p2);//赋值后*p2的值4444,p2的地址6422284
    return 0;
}
//指针取值需要添加* 赋值时不需要加*
// *p的表示值（而非地址）p表示地址而非值