namespace Show
{
    public abstract class AbstractPet
    {
        // Template Method
        public void DailyRoutine()
        {
            WakeUp();
            Eat();
            Play();
            Sleep();
        }

        public abstract void WakeUp();
        public abstract void Eat();
        public abstract void Play();
        public abstract void Sleep();
    }
}