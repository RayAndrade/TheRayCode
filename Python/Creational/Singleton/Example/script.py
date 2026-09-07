class Singleton:
    _instance = None

    def __new__(cls):
        if cls._instance is None:
            cls._instance = super().__new__(cls)

        return cls._instance


class Simple:
    pass


# ---------------------------------------------------------
# Singleton
# Creating Singleton twice returns the SAME object.
# ---------------------------------------------------------

singleton_1 = Singleton()
singleton_2 = Singleton()

print("SINGLETON")
print("singleton_1:", singleton_1)
print("singleton_2:", singleton_2)
print("Same object:", singleton_1 is singleton_2)


# ---------------------------------------------------------
# Simple
# Creating Simple twice creates TWO different objects.
# ---------------------------------------------------------

simple_1 = Simple()
simple_2 = Simple()

print("\nSIMPLE")
print("simple_1:", simple_1)
print("simple_2:", simple_2)
print("Same object:", simple_1 is simple_2)