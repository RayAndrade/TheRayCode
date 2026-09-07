# Import the Product participant.
from Product import Product


# Define the ConcreteProduct participant.
class ConcreteProduct(Product):

    # Override the Operation method.
    def Operation(self):

        # Show concrete product behavior.
        print("ConcreteProduct Operation")