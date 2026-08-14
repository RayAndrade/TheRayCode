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
