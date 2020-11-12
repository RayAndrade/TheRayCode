namespace Show
{
    public class ComponentA : IComponent
    {
        public void Accept(IVisitor visitor)
        {
            visitor.VisitComponentA(this);
        }
        
        public string ExclusiveMethodOfComponentA()
        {
            return "A";
        }
    }
}