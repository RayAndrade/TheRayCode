namespace Composite
{
    public abstract class MenuComponent
    {
        public virtual void Add(MenuComponent menuComponent)
        {
            throw new System.NotImplementedException();
        }

        public virtual void Remove(MenuComponent menuComponent)
        {
            throw new System.NotImplementedException();
        }

        public virtual void Print()
        {
            throw new System.NotImplementedException();
        }

    }
}