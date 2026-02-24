using System;

namespace Memento
{
    public class Memento : IMemento
    {
        private string _state;
        private DateTime _date;
        
        public Memento(string state)
        {
            this._state = state;
            this._date = DateTime.Now;
        }

        public string GetName()
        {
            return $"{this._date} / ({this._state.Substring(0, 9)})...";
        }

        public string GetState()
        {
            return this._state;
        }

        public DateTime GetDate()
        {
            return this._date;
        }
    }
}