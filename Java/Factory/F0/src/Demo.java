import factory.Dialog;
import factory.HtmlDialog;
import factory.WindowsDialog;

public class Demo {

    public static void main(String[] args) {
        configure();
        runBusinessLogic();
    }

    static void configure() {
        //if (System.getProperty("os.name").equals("Linux"))
         if (System.getProperty("os.name").equals("Windows 10"))
        {
            dialog = new WindowsDialog();
        } else {
            dialog = new HtmlDialog();
        }
    }
    private static Dialog dialog;
    static void runBusinessLogic() {
        dialog.renderWindow();
    }

}
