namespace TheRayCode.Mediator
{
    public interface Mediator
    {
        void Notify(object sender, string ev);
    }
}