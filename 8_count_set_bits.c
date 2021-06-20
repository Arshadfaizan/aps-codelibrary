int count_set_bits(int mask)
{
    int temp=mask;
    int sum = 0;
    while(temp)
    {
        if(temp & 1 ==1)
            sum+=1;
        temp=temp>>1;
    }
    return sum;
}
int main()
{
  int num,a;
  scanf("%d",&num);
  a=count_set_bits(num);
  printf("%d",a);
  return 0;
}
