namespace ChainOfResponsibility
{
    public interface Handler
    {
        Handler SetNext(Handler handler);
        
        object Handle(object request);
    }
}