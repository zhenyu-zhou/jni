public class Test
{
	private native String testString(String s);
	private native int testInt(int n);
	private static Test instance = new Test();

	static {
        	System.loadLibrary("jni");
	}	

	public static void main(String args[])
	{
		String ret = instance.testString("hello from java");
		System.out.println("[Java] "+ret);
		int n = instance.testInt(66);
		System.out.println("[Java] "+n);
	}
}




