namespace Memento
{
    using System;
    
    public class TimeCapsule
    {
        private string _episode;

        public TimeCapsule(string episode)
        {
            _episode = episode;
        }

        public string RecallEpisode()
        {
            return _episode;
        }

    }
}