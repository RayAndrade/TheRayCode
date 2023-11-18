namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Directory root = new Directory("root");
            Directory dir1 = new Directory("dir1");
            Directory dir2 = new Directory("dir2");

            File file1 = new File("file1");
            File file2 = new File("file2");
            File file3 = new File("file3");

            root.AddItem(dir1);
            root.AddItem(file1);

            dir1.AddItem(file2);
            dir1.AddItem(dir2);

            dir2.AddItem(file3);

            root.Display();

        }
    }
}