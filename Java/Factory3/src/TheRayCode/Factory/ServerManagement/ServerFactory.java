package TheRayCode.Factory.ServerManagement;
// Goal to deliver different types of server objects
public class ServerFactory {
    public static IServer GetServer(String server) throws Exception{

        switch (server){
            case "mail":
                return new MailServer();
            case "ftp":
                return new FTPServer();
            case "q":
                return new QuantumServer();
            default:
               throw new Exception("Invalid server type");
         }
    }
}
