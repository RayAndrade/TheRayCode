namespace TheRayCode.Mediator
{
    public interface IMediator
    {
        void Notify(object sender, string ev);
    }
}