# Import the Creator participant.
from Creator import Creator

# Import the Product participant.
from Product import Product

# Import the ConcreteProduct participant.
from ConcreteProduct import ConcreteProduct


# Define the ConcreteCreator participant.
class ConcreteCreator(Creator):

    # Override FactoryMethod.
    def FactoryMethod(self) -> Product:

        # Return a ConcreteProduct instance.
        return ConcreteProduct()