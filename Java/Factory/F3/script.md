Factory Design pattern <br/>
https://youtu.be/mTzDf_EZ1aM <br/>
Learning the Factory Design Pattern<br/>

Define an interface for creating an object, but you can let subclasses deferinstancation to subclasses.
How I should describe the problem
we have : FTP, mail, App Servers, Test Servers

we want to call the method Resove("parmeter")

The result is polymorphic with the same idenity "resolve"

Code demo starts @ 7:00

Create new class **ServerMgmtTool**

```java
import java.util.Scanner;

public class ServerMgmtTool {
    public static void main(String[] args){

        // What type of server the user wants to resolve
        Scanner input = new Scanner(System.in);
        System.out.println("Which server do you wish to resolve? (mail, ftp, q)");
        String serverResult = input.nextLine();

        IServer server = ServerFactory.GetServer(serverResult);
        server.Resolve();
    }
}
```

Create a packate named **ServerManagement**.

Createclass **ServerFactory**

```java
public class ServerFactory {
    public static IServer GetServer(String server){


    }
}
```

Next we create an interface called **IServer**

```java
public interface IServer {
    // Resolves any related issues for a service
    public void Resolve();
}
```

This where we make use if polymorphism useing *Resolve*

Back at **ServerFactory**
```java
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
```

Create class for each of these servers

at class **ServerMgmtTool** we add:
```java
throws Exception
```
as a result this is added
```java

```












































