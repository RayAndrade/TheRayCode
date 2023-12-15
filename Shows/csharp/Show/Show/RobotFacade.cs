namespace Show
{
    public class RobotFacade
    {
        private CookingSubsystem _cookingSubsystem;
        private CleaningSubsystem _cleaningSubsystem;
        private EntertainmentSubsystem _entertainmentSubsystem;
        
        public RobotFacade()
        {
            _cookingSubsystem = new CookingSubsystem();
            _cleaningSubsystem = new CleaningSubsystem();
            _entertainmentSubsystem = new EntertainmentSubsystem();
            
        }
        
        public void PerformMorningRoutine()
        {
            _cookingSubsystem.MakeCoffee();
            _cleaningSubsystem.DoDusting();
            _entertainmentSubsystem.PlayMorningMusic();
        }
    }
}