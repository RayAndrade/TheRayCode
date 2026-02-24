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
