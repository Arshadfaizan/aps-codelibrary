#include <stdio.h>
#include <math.h>
#define max 10000000
int lookup[max][max];
int a[max] ;
void query(int L,int R)
{
         int d = (int)log2(R - L + 1);

    if (a[lookup[L][d]] <= a[lookup[R - (1 << d) + 1][d]])
        printf("%d\n",a[lookup[L][d]]);

    else
        printf("%d\n",a[lookup[R - (1 << d) + 1][d]]) ;
}
int main() {
 /*int lookup[50][50];*/

 int n ,i, j,m;
 scanf("%d",&n);
 scanf("%d",&m);
 for (int p=0;p<n;p++)
 {
     scanf("%d",&a[p]);
 }
 for (i = 0; i < n; i++)
  {lookup[i][0] = i;}
 for (j=1; (1<<j)<=n; j++) {
 for (i=0; (i+(1<<j)-1) < n; i++) {
 if (a[lookup[i][j-1]] < a[lookup[i + (1<<(j-1))][j-1]]){
 lookup[i][j] = lookup[i][j-1];
 }
 else
 lookup[i][j] = lookup[i + (1 << (j-1))][j-1];
 }
 }

 for(int k=0;k<n;k++)
 {
     for(int q=0;q<4;q++)
     {
         printf("%d\t",lookup[k][q]);
     }
     printf("\n");
 }
 int l,r;
for(int u=0;u<m;u++)
{
 scanf("%d",&l);
  scanf("%d",&r);
 query(l,r);
}
 return 0;
}
