using System;

namespace Show
{
    public class MarsRoverCadet : SpaceCadet
    {
        private string favoriteRock;

        public MarsRoverCadet(string favoriteRock)
        {
            this.favoriteRock = favoriteRock; // Every cadet has a favorite rock on Mars!
        }
        
        public void Explore(string missionLog)
        {
            Console.WriteLine($"Favorite Rock = {favoriteRock}, Mission Log = {missionLog}");
        }
    }
}