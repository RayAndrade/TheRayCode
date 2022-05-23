package TheRayCode.Factory;
//https://www.youtube.com/watch?v=mTzDf_EZ1aM&

import TheRayCode.Factory.ServerManagement.IServer;
import TheRayCode.Factory.ServerManagement.ServerFactory;

import java.util.Scanner;

/**
 * https://www.youtube.com/watch?v=mTzDf_EZ1aM
 * Understanding The Factory Design Pattern
 * Ryan Schachte
 */

public class Demo {
    public static void main(String[] args) throws Exception{

        // What type of server the user wants to resolve
        Scanner input = new Scanner(System.in);
        System.out.println("Which server do you wish to resolve? (mail, ftp, q)");
        String serverResult = input.nextLine();

        IServer server = ServerFactory.GetServer(serverResult);
        server.Resolve();

        //System.out.println("The Ray Code is AWESOME!!!");
    }
}
