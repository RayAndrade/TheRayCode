namespace Memento
{
    public class Originator
    {
        private string _state;

        // Set a new state
        public void SetState(string state)
        {
            _state = state;
        }

        // Get current state
        public string GetState()
        {
            return _state;
        }

        // Save state to memento
        public Memento SaveStateToMemento()
        {
            return new Memento(_state);
        }

        // Restore state from memento
        public void GetStateFromMemento(Memento memento)
        {
            _state = memento.GetState();
        }
    }
}