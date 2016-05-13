int glo_i=16;

int f1(int x, int y)
{
  int res= x+y;
  return res;
}
void main()
{
  int a=1;
  int b=3;
  int c=0;
  c=a-glo_i;
  b= f1(a,b);
}
