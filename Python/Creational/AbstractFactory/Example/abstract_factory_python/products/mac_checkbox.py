from products.abstract_checkbox import AbstractCheckbox

class MacCheckbox(AbstractCheckbox):
    def render(self):
        print("Rendering a Mac checkbox.")