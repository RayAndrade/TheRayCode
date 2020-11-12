using System;

namespace TheRay.Memento
{
    public interface IMemento
    {
        string GetName();

        string GetState();

        DateTime GetDate();
    }
}