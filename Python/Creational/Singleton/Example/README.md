For the video, I would keep the first version deliberately simple so the student can immediately see the difference between **Singleton** and a normal **Simple** class.

```python
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
```

### What the student should see

The output will look approximately like:

```text
SINGLETON
singleton_1: <__main__.Singleton object at 0x7f...>
singleton_2: <__main__.Singleton object at 0x7f...>
Same object: True

SIMPLE
simple_1: <__main__.Simple object at 0x7f...>
simple_2: <__main__.Simple object at 0x7f...>
Same object: False
```

The important visual is that the two `Singleton` variables display the **same memory identity**, while the two `Simple` variables display different identities.

### The key line for your video

```python
def __new__(cls):
```

`__new__()` is where Python actually creates the object. Your Singleton checks:

```python
if cls._instance is None:
```

If an instance doesn't exist, create it:

```python
cls._instance = super().__new__(cls)
```

But every call ultimately returns:

```python
return cls._instance
```

So:

```text
singleton_1 ─────┐
                 ├────► Singleton Object
singleton_2 ─────┘


simple_1 ─────────────► Simple Object #1

simple_2 ─────────────► Simple Object #2
```

That gives you a very clean setup for **Part 2** of the video, where we can add actual **state** to both objects. For example, change a value through `singleton_1` and demonstrate that `singleton_2` sees the change because they are the same object, while changing `simple_1` does not change `simple_2`.

That would make the Singleton behavior even more obvious than the memory addresses alone.

