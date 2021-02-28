package TheRayCode.factory_method.example;

import TheRayCode.factory_method.example.factory.Dialog;
import TheRayCode.factory_method.example.factory.HtmlDialog;
import TheRayCode.factory_method.example.factory.WindowsDialog;


/**
 * Demo class. Everything comes together here.
 */
public class Demo {
    private static Dialog dialog;

    public static void main(String[] args) {
        configure();
        runBusinessLogic();
    }

    /**
     * The concrete factory is usually chosen depending on configuration or
     * environment options.
     */


    static void configure() {

        switch(2) {
            case 1:
                dialog = new WindowsDialog();
                break;
            case 2:
                dialog = new HtmlDialog();
                break;
            default:
                // exit code block
        }
    }

    /**
     * All of the client code should work with factories and products through
     * abstract interfaces. This way it does not care which factory it works
     * with and what kind of product it returns.
     */
    static void runBusinessLogic() {
        dialog.renderWindow();
    }
}
