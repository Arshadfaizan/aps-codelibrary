#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
 
char* solve (int N, int* A) {
   // Write your code here
 
   long long int i,j,k,ans=0,flag=0;
    for(i=0;i<N-1;i++)
    {
        ans=gcd(A[i],A[i+1]);
        if(ans==1)
        {
            flag=1;
        }
        
    }
    if(flag==1)
    {
        return "YES";
    }
   else{
       return "NO";
   }
}
int gcd(long long int a,long long int b)
{
   if(b==0)
       return a;
return gcd(b,a%b);   
}
int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        scanf("%d", &N);
        if(N<2)
        {
            return "NO";
            exit(0);
        }
        int i_A;
        int *A = (int *)malloc(sizeof(int)*(N));
        for(i_A = 0; i_A < N; i_A++)
        	scanf("%d", &A[i_A]);
 
        char* out_ = solve(N, A);
        printf("%s", out_);
        printf("\n");
    }
}
