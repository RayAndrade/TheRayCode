namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            Directory root = new Directory("Cat's Lair");
            Directory dir1 = new Directory("Nap Spots");
            Directory dir2 = new Directory("Treasure Trove");

            File file1 = new File("Dream Journal");
            File file2 = new File("Favorite Toys List");
            File file3 = new File("Secret Stash of Catnip");

            root.AddItem(dir1);
            root.AddItem(file1);

            dir1.AddItem(file2);
            dir1.AddItem(dir2);

            dir2.AddItem(file3);

            root.Display();
        }
    }
}