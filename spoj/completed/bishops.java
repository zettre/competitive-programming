import java.math.*;
import java.util.*;
class bishops
{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		while(sc.hasNextBigInteger())
		{
			BigInteger n=sc.nextBigInteger();
			if(n.equals(BigInteger.ONE))
				System.out.println("1");
			else
				System.out.println(n.subtract(BigInteger.ONE).multiply(BigInteger.valueOf(2)));
		}
	}
}