using System.Collections.Generic;

namespace Show
{
    public class Caretaker
    {
        private List<Memento> _mementoList = new List<Memento>();
        public void Add(Memento state)
        {
            _mementoList.Add(state);
        }

        public Memento Get(int index)
        {
            return _mementoList[index];
        }
    }
}