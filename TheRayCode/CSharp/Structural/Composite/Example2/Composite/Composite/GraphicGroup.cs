using System.Collections.Generic;

namespace Composite
{
    public class GraphicGroup: IGraphicElement
    {
        private readonly List<IGraphicElement> _graphics = new List<IGraphicElement>();

        public void Add(IGraphicElement graphic)
        {
            _graphics.Add(graphic);
        }

        public void Remove(IGraphicElement graphic)
        {
            _graphics.Remove(graphic);
        }

        
        public void Draw()
        {
            foreach(var graphic in _graphics)
            {
                graphic.Draw();
            }
        }
    }
}