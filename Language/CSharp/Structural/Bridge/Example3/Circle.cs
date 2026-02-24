namespace Show
{
    public class Circle : Shape
    {
        private int x, y, radius;

        public Circle(int x, int y, int radius, IDrawAPI drawAPI) : base(drawAPI)
        {
            this.x = x;
            this.y = y;
            this.radius = radius;
        }
        
        public Circle(IDrawAPI drawAPI) : base(drawAPI)
        {
        }

        public override void Draw()
        {
            drawAPI.DrawCircle(radius, x, y);
        }
    }
}