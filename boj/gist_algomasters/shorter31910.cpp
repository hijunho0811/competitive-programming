#include<stdio.h>
typedef long long ll;
ll d[31][31],i,j,k,n;
bool a[31][31];
int main(){
    scanf("%lld",&n);
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            scanf("%lld",&k);
            a[i][j]=k;
        }
    }
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            d[i][j]=d[i-1][j]>d[i][j-1]?d[i-1][j]:d[i][j-1];
            k=a[i][j];
            d[i][j]=(d[i][j]<<1)|k;
        }
    }
    printf("%lld",d[n][n]);
    return 0;
}