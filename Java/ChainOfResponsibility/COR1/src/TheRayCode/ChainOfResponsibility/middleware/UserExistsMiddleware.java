package TheRayCode.ChainOfResponsibility.middleware;
import TheRayCode.ChainOfResponsibility.server.Server;

public class UserExistsMiddleware extends Middleware {
    private Server server;
    @Override
    public boolean check(String email, String password) {
        if (!server.hasEmail(email)) {
            System.out.println("This email is not registered!");
            return false;
        }
        if (!server.isValidPassword(email, password)) {
            System.out.println("Wrong password!");
            return false;
        }
        return checkNext(email, password);

    }
    public UserExistsMiddleware(Server server) {
        this.server = server;
    }

}
