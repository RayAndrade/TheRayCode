from ConcreteCreator import ConcreteCreator

def main():
    creator = ConcreteCreator()
    product = creator.AnOperation()
    print(type(product).__name__)

if __name__ == "__main__":

    main()