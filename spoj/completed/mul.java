import java.util.*;
import java.math.*;
class Solution
{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		int t;
		t=sc.nextInt();
		while(t--!=0)
		{
			BigInteger n1=sc.nextBigInteger();
			BigInteger n2=sc.nextBigInteger();
			System.out.println(n1.multiply(n2));
		}
	}
}