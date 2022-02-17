package TheRayCode.Factory.ServerManagement;

public class MailServer implements IServer{
    @Override
    public void Resolve() {
        System.out.println("Performing some complex Mail Server resolution stuff");
    }
}
