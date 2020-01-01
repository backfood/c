#include <stdio.h>
int sum(){
    int i=0;
    return i;
}
int main(){
    int price = 8;
    int parsum=sum();
    printf("请输入中文\n"); //乱码问题详见 readme
    scanf("%d", &price);
    printf("%d\n", price);
    
    printf("sum的值为%d",parsum);
    return 0;
}

