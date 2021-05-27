import java.util.*;
class Arr
{
   abstract void fun()
    {
       fun()
       {

       }
    }
	public static void main(String a[])
	{	
		int number,element;
		 Scanner sc = new Scanner(System.in);
         int arr[][] = new int[3][];
         for(int i=0;i<arr.length;i++)
         {
             System.out.println("Enter size of array"+(i+1));
             number = sc.nextInt();
             arr[i] = new int[number];
             System.out.println("Enter array elements"); 
             for(int j=0;j<number;j++)
             {
                element = sc.nextInt();
                arr[i][j] = element;
             }
         }
         System.out.println("Your jagged array is");
         for(int i=0;i<arr.length;i++)
         {
         	for(int j=0;j< arr[i].length;j++)
         	{
               System.out.print(arr[i][j]+" ");	
         	}  System.out.print(" "+" ");
         }
	}

}
}