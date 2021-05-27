class Hack
{
 void cal_Ans()
 {
  int x =12,ans;
  int sum3=0,a=3;
  int sum5=0,b=5;
  int sum15=0,c=15;
  int n3 = x/a;
  int n5 = x/b;
  int n15 = x/c;
  sum3 = n3/2*(2*a+(n3-1)*a);
  sum5 = n5/2*(2*b+(n5-1)*b);
  ans =sum3+sum5;
  System.out.println(ans); 	
 }
public static void main(String a[])
{
	Hack obj = new Hack();
	obj.cal_Ans();
}
}