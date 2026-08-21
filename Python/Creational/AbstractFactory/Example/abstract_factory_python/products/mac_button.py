from products.abstract_button import AbstractButton

class MacButton(AbstractButton):
    def render(self):
        print("Rendering a Mac button.")