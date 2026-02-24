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