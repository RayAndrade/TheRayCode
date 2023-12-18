using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var robot = new RobotFacade();
            robot.PerformMorningRoutine();
            Console.WriteLine("All tasks completed with a smile (if I had a face)!");
            
        }
    }
}