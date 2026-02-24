namespace Show
{
    public class Rectangle: Shape
    {
        private int width, height, x, y;
        
        public Rectangle(int width, int height, int x, int y, IDrawAPI drawAPI) : base(drawAPI)
        {
            this.width = width;
            this.height = height;
            this.x = x;
            this.y = y;
        }
        
        
        public Rectangle(IDrawAPI drawAPI) : base(drawAPI)
        {
        }

        public override void Draw()
        {
            drawAPI.DrawRectangle(width, height, x, y);
        }
    }
}