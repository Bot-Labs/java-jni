

class JNIJavaSample
{
    public native double add(double a, double b);

    static
    {
        System.loadLibrary("jnilib");
    }

    public static void main(String[] args)
    {
        JNIJavaSample obj = new JNIJavaSample();
        double res  = obj.add(1.0, 2.0);
        System.out.println(res);
    }

}