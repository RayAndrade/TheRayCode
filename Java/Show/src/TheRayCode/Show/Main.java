package TheRayCode.Show;

import TheRayCode.Show.app.Application;
import TheRayCode.Show.factory.GUIFactory;
import TheRayCode.Show.factory.MacOSFactory;
import TheRayCode.Show.factory.WindowsFactory;


public class Main {

    private static Application configureApplication() {
        Application app;
        GUIFactory factory;
        String osName = System.getProperty("os.name").toLowerCase();
        if (!osName.contains("mac")) {
            factory = new MacOSFactory();
            app = new Application(factory);
        } else {
            factory = new WindowsFactory();
            app = new Application(factory);
        }
        return app;
    }

    public static void main(String[] args) {
        Application app = configureApplication();
        app.paint();
    }
}
