namespace Composite
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Create individual graphics
            Circle circle = new Circle();
            Rectangle rectangle = new Rectangle();
            
            // Create a graphic group and add individual graphics to it
            GraphicGroup graphicGroup = new GraphicGroup();
            graphicGroup.Add(circle);
            graphicGroup.Add(rectangle);

            // Create another graphic group and add the first graphic group to it
            GraphicGroup mainGroup = new GraphicGroup();
            mainGroup.Add(graphicGroup);
            mainGroup.Add(new Rectangle());

            // Draw all graphics in the main group
            mainGroup.Draw();
        }
    }
}