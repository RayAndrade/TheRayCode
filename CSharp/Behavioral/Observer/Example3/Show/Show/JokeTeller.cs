namespace Show
{
    using System;
    using System.Collections.Generic;
    
    public class JokeTeller
    {
        private List<IListener> listeners = new List<IListener>();
        private string currentJoke;

        public void Subscribe(IListener listener)
        {
            listeners.Add(listener);
        }

        public void Unsubscribe(IListener listener)
        {
            listeners.Remove(listener);
        }

        public void TellJoke(string joke)
        {
            currentJoke = joke;
            NotifyListeners();
        }

        private void NotifyListeners()
        {
            foreach (IListener listener in listeners)
            {
                listener.HearJoke(currentJoke);
            }
        }
    }
}