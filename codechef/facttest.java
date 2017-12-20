import java.io.*;
class facttest
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int a=Integer.parseInt(br.readLine());
		int fact=1;
		for(int i=1;i<=a;i++)
		fact*=i;
		System.out.println(fact);
	}
}