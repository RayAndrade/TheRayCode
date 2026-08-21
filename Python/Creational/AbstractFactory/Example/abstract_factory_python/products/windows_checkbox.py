from products.abstract_checkbox import AbstractCheckbox

class WindowsCheckbox(AbstractCheckbox):
    def render(self):
        print("Rendering a Windows checkbox.")