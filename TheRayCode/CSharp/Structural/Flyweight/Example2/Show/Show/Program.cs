namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var academy = new CadetAcademy();

            var cadetRocky = academy.AssignCadet("Basalt");
            var cadetStony = academy.AssignCadet("Granite");
            var cadetRockyClone = academy.AssignCadet("Basalt"); // Same as cadetRocky

            cadetRocky.Explore("Found a strange green stone!");
            cadetStony.Explore("Met a Martian, nice fellow.");
            cadetRockyClone.Explore("Discovered alien graffiti!");
        }
    }
}