int check_set_bit(int mask,int j)
{
    int i = 1;

    while(j){
        i >>=1;
        j--;
    }

    return mask&i ==1 ;

}
int main()
{
  int num,a;
  a=check_set_bit( mask, j)
  printf("%d",a);
  return 0;
}
