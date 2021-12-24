package TheRayCode.Show.app;

import TheRayCode.Show.buttons.Button;
import TheRayCode.Show.checkboxes.Checkbox;
import TheRayCode.Show.factory.GUIFactory;

public class Application {

    private Button button;
    private Checkbox checkbox;

    public Application(GUIFactory factory) {
        button = factory.createButton();
        checkbox = factory.createCheckbox();
    }

    public void paint() {
        button.paint();
        checkbox.paint();
    }
}
