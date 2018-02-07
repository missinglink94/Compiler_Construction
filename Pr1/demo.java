import java.lang.*;
public class demo
{
	public static void main(String[] arg)
	{
		int[] val = new int[arg.length];
		for (int i = 0; i < arg.length; i++)
		val[i] = Integer.parseInt(arg[i]);
		int result;
		result = val[0] + val[1];
		System.out.println(result);
	}
}
