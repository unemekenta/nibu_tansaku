#include <stdio.h>
#define N 10

int a[N] = {1,3,5,8,9,16,19,22,54,60};

void search(int x);

int main(void){
    search(3);
    search(5);
    search(30);
    search(60);
}

void search(int x){
    int i,j,k;
    i = 0;
    j = N - 1;
    do{
        k = (i + j) / 2;
        printf("真ん中:%d番目、　真ん中の数字：%d\n",k,a[k]);
        if(x > a[k]){
            i = k + 1;
            printf("最小点を真ん中に\n");
        }else{
            j = k - 1;
            printf("最大点を真ん中に\n");
        }
        k = (i + j) / 2;
        printf("最小：%d\n",a[i]);
        printf("真ん中：%d\n",a[k]);
        printf("最大：%d\n",a[j]);
    }while(a[k] != x && i <= j);
    if(a[k] == x)
        printf("%d:見つかりました\n",x);
    else
        printf("%d:見つかりませんでした\n",x);
};