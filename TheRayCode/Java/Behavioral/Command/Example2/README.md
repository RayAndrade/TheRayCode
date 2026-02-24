[up](../README.md)

For a different context that doesn't involve a Light, let's consider a simple text file operation scenario, such as opening, writing to, and saving a text file. This example will still follow the Command pattern principles but will be relatable to file operations.

### Project Structure

1. **Command Interface** (`Command.java`): Interface for executing operations.
2. **ConcreteCommand Classes**: 
    - `OpenFileCommand.java`
    - `WriteFileCommand.java`
    - `SaveFileCommand.java`
3. **Receiver Class** (`TextFile.java`): Performs the actual file operations.
4. **Invoker Class** (`FileOperationExecutor.java`): Executes the command.
5. **Client Class** (`Main.java`): Creates command objects and sets their receiver.

### Implementation

#### 1. Command Interface (`Command.java`)

```java
public interface Command {
    void execute();
}
```

#### 2. Receiver Class (`TextFile.java`)

```java
public class TextFile {
    private String name;

    public TextFile(String name) {
        this.name = name;
    }

    public void open() {
        System.out.println("Opening file " + name);
    }

    public void write() {
        System.out.println("Writing to file " + name);
    }

    public void save() {
        System.out.println("Saving file " + name);
    }
}
```

#### 3. ConcreteCommand Classes

**OpenFileCommand.java**

```java
public class OpenFileCommand implements Command {
    private TextFile textFile;

    public OpenFileCommand(TextFile textFile) {
        this.textFile = textFile;
    }

    @Override
    public void execute() {
        textFile.open();
    }
}
```

**WriteFileCommand.java**

```java
public class WriteFileCommand implements Command {
    private TextFile textFile;

    public WriteFileCommand(TextFile textFile) {
        this.textFile = textFile;
    }

    @Override
    public void execute() {
        textFile.write();
    }
}
```

**SaveFileCommand.java**

```java
public class SaveFileCommand implements Command {
    private TextFile textFile;

    public SaveFileCommand(TextFile textFile) {
        this.textFile = textFile;
    }

    @Override
    public void execute() {
        textFile.save();
    }
}
```

#### 4. Invoker Class (`FileOperationExecutor.java`)

```java
public class FileOperationExecutor {
    public void executeCommand(Command command) {
        command.execute();
    }
}
```

#### 5. Client Class (`Main.java`)

```java
public class Main {
    public static void main(String[] args) {
        TextFile file = new TextFile("example.txt");

        Command open = new OpenFileCommand(file);
        Command write = new WriteFileCommand(file);
        Command save = new SaveFileCommand(file);

        FileOperationExecutor executor = new FileOperationExecutor();
        
        executor.executeCommand(open);
        executor.executeCommand(write);
        executor.executeCommand(save);
    }
}
```

### Order of Creation

1. Define the `Command` interface.
2. Implement the Receiver (`TextFile`).
3. Create ConcreteCommands (`OpenFileCommand`, `WriteFileCommand`, `SaveFileCommand`).
4. Implement the Invoker (`FileOperationExecutor`).
5. Assemble and test the pattern in `Main`.

### Expected Output

When you run `Main.java`, you should see:

```
Opening file example.txt
Writing to file example.txt
Saving file example.txt
```

This demonstrates the Command pattern applied to text file operations, with each command (open, write, save) encapsulated in its own object, allowing for flexible command execution and management.
