using System.Collections.Generic;

namespace Show
{
    public class CadetAcademy
    {
        private Dictionary<string, SpaceCadet> cadets = new Dictionary<string, SpaceCadet>();

        public SpaceCadet AssignCadet(string favoriteRock)
        {
            if (!cadets.ContainsKey(favoriteRock))
            {
                cadets[favoriteRock] = new MarsRoverCadet(favoriteRock);
            }
            return cadets[favoriteRock];
        }
    }
}