namespace Show
{
    public class ComponentB : IComponent
    {
        public void Accept(IVisitor visitor)
        {
            visitor.VisitComponentB(this);
        }

        public string SpecialMethodOfComponentB()
        {
            return "B";
        }
    }
}