int setbit(int mask,int num)
{
    int i =1;
    while(num){
        i=i<<1;
        num--;
    }
    return mask & i;
}

int main()
{
  int mask,num;
  scanf(%d%d,&mask,&num);
  a=setbit(mask,num);
  printf("%d",a);
  return 0;
}
  
