namespace Show
{
    public abstract class Animal
    {
        protected Animal NextAnimal;

        public void SetNext(Animal next)
        {
            NextAnimal = next;
        }

        public abstract void PerformAct(string trick);

    }
}