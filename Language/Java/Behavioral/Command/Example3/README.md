[up](../README.md)

Let's use the Command design pattern for a simple banking application scenario where operations such as depositing and withdrawing money are encapsulated as commands. This example will demonstrate the flexibility of the Command pattern in managing operations and potentially supporting undo operations, transaction logs, or command queues.

### Project Structure

1. **Command Interface** (`Command.java`): Interface for executing operations.
2. **ConcreteCommand Classes**:
   - `DepositCommand.java`
   - `WithdrawCommand.java`
3. **Receiver Class** (`BankAccount.java`): Performs the actual banking operations.
4. **Invoker Class** (`BankApp.java`): Executes commands.
5. **Client Class** (`Main.java`): Creates command objects and sets their receiver.

### Implementation

#### 1. Command Interface (`Command.java`)

```java
public interface Command {
    void execute();
}
```

#### 2. Receiver Class (`BankAccount.java`)

```java
public class BankAccount {
    private double balance;

    public BankAccount(double balance) {
        this.balance = balance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited: $" + amount + ", Current Balance: $" + balance);
    }

    public void withdraw(double amount) {
        if(balance >= amount) {
            balance -= amount;
            System.out.println("Withdrew: $" + amount + ", Current Balance: $" + balance);
        } else {
            System.out.println("Insufficient funds for withdrawal of: $" + amount);
        }
    }
}
```

#### 3. ConcreteCommand Classes

**DepositCommand.java**

```java
public class DepositCommand implements Command {
    private BankAccount account;
    private double amount;

    public DepositCommand(BankAccount account, double amount) {
        this.account = account;
        this.amount = amount;
    }

    @Override
    public void execute() {
        account.deposit(amount);
    }
}
```

**WithdrawCommand.java**

```java
public class WithdrawCommand implements Command {
    private BankAccount account;
    private double amount;

    public WithdrawCommand(BankAccount account, double amount) {
        this.account = account;
        this.amount = amount;
    }

    @Override
    public void execute() {
        account.withdraw(amount);
    }
}
```

#### 4. Invoker Class (`BankApp.java`)

```java
public class BankApp {
    public void executeTransaction(Command command) {
        command.execute();
    }
}
```

#### 5. Client Class (`Main.java`)

```java
public class Main {
    public static void main(String[] args) {
        BankAccount account = new BankAccount(1000); // Starting balance $1000

        Command deposit = new DepositCommand(account, 200); // Deposit $200
        Command withdraw = new WithdrawCommand(account, 150); // Withdraw $150

        BankApp app = new BankApp();
        
        app.executeTransaction(deposit); // Execute deposit
        app.executeTransaction(withdraw); // Execute withdrawal
    }
}
```

### Order of Creation

1. Define the `Command` interface.
2. Implement the Receiver (`BankAccount`).
3. Create ConcreteCommands (`DepositCommand`, `WithdrawCommand`).
4. Implement the Invoker (`BankApp`).
5. Assemble and test the pattern in `Main`.

### Expected Output

When you run `Main.java`, you should see:

```
Deposited: $200, Current Balance: $1200
Withdrew: $150, Current Balance: $1050
```

This demonstrates the Command pattern in a banking application, where each banking operation (deposit and withdraw) is encapsulated in its own command object. This allows for flexible and extensible operation execution, including the potential to add features like undo operations, logging, and transaction queues in a real-world application.
