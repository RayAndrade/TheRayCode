namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            RealSubject realSubject = new RealSubject();
            Proxy proxy = new Proxy(realSubject);
            proxy.Request();
        }
    }
}