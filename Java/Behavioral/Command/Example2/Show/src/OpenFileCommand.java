public class OpenFileCommand implements Command{

    private TextFile textFile;

    public OpenFileCommand(TextFile textFile) {
        this.textFile = textFile;
    }

    @Override
    public void execute() {
        textFile.open();
    }
}
