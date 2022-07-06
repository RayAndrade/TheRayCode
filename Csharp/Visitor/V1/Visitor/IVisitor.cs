namespace Show
{
    public interface IVisitor
    {
        void VisitComponentA(ComponentA element);

        void VisitComponentB(ComponentB element);
    }
}