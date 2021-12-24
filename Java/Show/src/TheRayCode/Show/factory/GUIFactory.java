package TheRayCode.Show.factory;

import TheRayCode.Show.buttons.Button;
import TheRayCode.Show.checkboxes.Checkbox;

public interface GUIFactory {
    Button createButton();
    Checkbox createCheckbox();
}
