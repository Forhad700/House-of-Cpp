#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    long long sum = 0; 
    int mn, mx;

    for(int i=1; i<=n; i++){
        int x;
        scanf("%d", &x);

        sum = sum + x;

        if(i==1){
            mn = x;
            mx = x;
        }

        if(x<mn){
            mn = x;
        }

        if(x>mx){
            mx = x;
        }
    }
    printf("%d %d %lld\n", mn, mx, sum);
}