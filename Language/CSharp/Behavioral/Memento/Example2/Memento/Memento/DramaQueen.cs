namespace Memento
{
    public class DramaQueen
    {
        private string _currentDrama;

        public void NewDrama(string drama)
        {
            _currentDrama = drama;
        }

        public string CurrentDrama()
        {
            return _currentDrama;
        }

        public TimeCapsule SaveDramaForLater()
        {
            return new TimeCapsule(_currentDrama);
        }

        public void ReminisceDrama(TimeCapsule capsule)
        {
            _currentDrama = capsule.RecallEpisode();
        }

    }
}