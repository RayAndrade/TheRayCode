namespace Memento
{
    using System.Collections.Generic;
    
    public class MemoryBank
    {
        private List<TimeCapsule> _dramaArchive = new List<TimeCapsule>();

        public void DepositDrama(TimeCapsule episode)
        {
            _dramaArchive.Add(episode);
        }

        public TimeCapsule WithdrawDrama(int index)
        {
            return _dramaArchive[index];
        }
    }
}