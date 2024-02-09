namespace Show
{
    public class Memento
    {
        private string _state;
        
        public Memento(string state)
        {
            _state = state;
        }
        
        public string GetState()
        {
            return _state;
        }
    }
}