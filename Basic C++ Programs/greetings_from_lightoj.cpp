#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int testCase = 1;
    while(t--){
        int x,y;
        scanf("%d %d", &x, &y);
        long long sum = x+y;
        printf("Case %d: %lld\n", testCase++, sum);
    }
}