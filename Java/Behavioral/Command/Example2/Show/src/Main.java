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