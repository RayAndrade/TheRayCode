[up](../README.md)

To illustrate the Iterator pattern with a more thematic example, we will iterate through counting sheep. This will involve modifying the `BookCollection` and `BookIterator` classes to instead represent a collection of sheep and an iterator to count them. We'll keep the structure of the project similar but tailor it to our sheep counting example.

### Adjusted Project Structure for Counting Sheep

1. **SheepAggregate** Interface: Represents the collection capable of creating an Iterator for sheep.
2. **SheepIterator** Interface: Defines the methods for navigating through a collection of sheep.
3. **SheepCollection** Class: Implements the SheepAggregate interface and returns an instance of the ConcreteSheepIterator.
4. **ConcreteSheepIterator** Class: Implements the SheepIterator interface, managing the current position in the sheep collection.
5. **Main** Class: Demonstrates using the iterator to count through sheep.

### Implementation Adjusted for Counting Sheep

#### 1. SheepAggregate.java
```java
public interface SheepAggregate {
    SheepIterator createIterator();
}
```

#### 2. SheepIterator.java
```java
public interface SheepIterator {
    boolean hasNext();
    Object next();
}
```

#### 3. SheepCollection.java
```java
public class SheepCollection implements SheepAggregate {
    private Integer[] sheepCounts;

    public SheepCollection(Integer[] sheepCounts) {
        this.sheepCounts = sheepCounts;
    }

    @Override
    public SheepIterator createIterator() {
        return new ConcreteSheepIterator(this);
    }

    public Integer[] getSheepCounts() {
        return sheepCounts;
    }
}
```

#### 4. ConcreteSheepIterator.java
```java
public class ConcreteSheepIterator implements SheepIterator {
    private SheepCollection sheepCollection;
    private int index;

    public ConcreteSheepIterator(SheepCollection sheepCollection) {
        this.sheepCollection = sheepCollection;
        this.index = 0;
    }

    @Override
    public boolean hasNext() {
        return index < sheepCollection.getSheepCounts().length;
    }

    @Override
    public Object next() {
        if (this.hasNext()) {
            return sheepCollection.getSheepCounts()[index++] + " sheep";
        }
        return null;
    }
}
```

#### 5. Main.java (Demo for Counting Sheep)
```java
public class Main {
    public static void main(String[] args) {
        Integer[] sheepCounts = {1, 2, 3, 4, 5};
        SheepCollection collection = new SheepCollection(sheepCounts);
        SheepIterator iterator = collection.createIterator();

        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }
}
```

### Explanation for Counting Sheep Example
- In this thematic example, each element in the `SheepCollection` represents a count of sheep, and the `ConcreteSheepIterator` iterates through these counts. 
- The `SheepCollection` class holds an array of integers, each representing a sheep. 
- The `ConcreteSheepIterator` class iterates over this collection, appending "sheep" to each count as it is returned, simulating counting each sheep.
- The `Main` class demonstrates how to use this iterator, resulting in printing statements counting sheep from 1 to 5.

### Expected Output When Running Main.java

The output of running this program should be a simple count of sheep, ideal for illustrating iteration through a collection:

```
1 sheep
2 sheep
3 sheep
4 sheep
5 sheep
```

This output shows the Iterator pattern in action, sequentially accessing and printing the count of sheep in the collection without revealing the collection's underlying structure.
