package factory;

import buttons.HtmlButton;
import buttons.Button;

public class HtmlDialog extends Dialog {
    @Override
    public Button createButton() {
        return new HtmlButton();
    }
}
