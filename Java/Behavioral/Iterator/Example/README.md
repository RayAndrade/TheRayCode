[up](../README.md)

To demonstrate the Iterator design pattern in Java, we will create an example that mimics a simple collection (e.g., a book collection) and iterates over it. According to the "Design Patterns: Elements of Reusable Object-Oriented Software" by the Gang of Four (GoF), the Iterator pattern allows sequential access to elements of a collection without exposing its underlying representation.

### Project Structure

1. **Aggregate** Interface: Represents the collection that can create an Iterator.
2. **Iterator** Interface: Provides the methods for navigation through a collection.
3. **ConcreteAggregate** Class: Implements the Aggregate interface and returns an instance of the ConcreteIterator.
4. **ConcreteIterator** Class: Implements the Iterator interface and keeps track of the current position in the collection.
5. **Main** Class: Demonstrates the use of the iterator to navigate through the collection.

### Step-by-Step Implementation

#### 1. Aggregate.java
```java
public interface Aggregate {
    Iterator createIterator();
}
```
- **Explanation**: This interface declares a method for creating an Iterator. In a real-world scenario, this could be implemented by any collection class that requires iteration functionality.

#### 2. Iterator.java
```java
public interface Iterator {
    boolean hasNext();
    Object next();
}
```
- **Explanation**: The Iterator interface defines two essential methods: `hasNext()`, which checks if there are more elements in the collection, and `next()`, which returns the next element in the collection.

#### 3. BookCollection.java (ConcreteAggregate)
```java
public class BookCollection implements Aggregate {
    private String[] books;

    public BookCollection(String[] books) {
        this.books = books;
    }

    @Override
    public Iterator createIterator() {
        return new BookIterator(this);
    }

    public String[] getBooks() {
        return books;
    }
}
```
- **Explanation**: `BookCollection` implements the `Aggregate` interface. It holds a collection of books (in this example, an array of strings) and implements the `createIterator()` method to return an instance of `BookIterator`.

#### 4. BookIterator.java (ConcreteIterator)
```java
public class BookIterator implements Iterator {
    private BookCollection bookCollection;
    private int index;

    public BookIterator(BookCollection bookCollection) {
        this.bookCollection = bookCollection;
        this.index = 0;
    }

    @Override
    public boolean hasNext() {
        return index < bookCollection.getBooks().length;
    }

    @Override
    public Object next() {
        if (this.hasNext()) {
            return bookCollection.getBooks()[index++];
        }
        return null;
    }
}
```
- **Explanation**: `BookIterator` implements the `Iterator` interface. It maintains a reference to the `BookCollection` and the current traversal position (`index`). `hasNext()` checks if there are more books to iterate over, and `next()` returns the current book and advances the index.

#### 5. Main.java (Demo)
```java
public class Main {
    public static void main(String[] args) {
        String[] books = {"Design Patterns", "Clean Code", "Refactoring"};
        BookCollection collection = new BookCollection(books);
        Iterator iterator = collection.createIterator();

        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }
}
```
- **Explanation**: In the `Main` class, we create an instance of `BookCollection` with a sample array of book titles. We then obtain an `Iterator` for this collection and use a `while` loop to print each book title.

### Order of Creation

1. `Aggregate.java`
2. `Iterator.java`
3. `BookCollection.java`
4. `BookIterator.java`
5. `Main.java`

### Expected Output

When you run `Main.java`, the expected output will be:
```
Design Patterns
Clean Code
Refactoring
```
This output demonstrates the Iterator pattern by sequentially accessing and printing the titles of the books in the collection without revealing the underlying array structure of the `BookCollection` class.
