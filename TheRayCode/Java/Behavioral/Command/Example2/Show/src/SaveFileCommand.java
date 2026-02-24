public class SaveFileCommand  implements Command{
    private TextFile textFile;

    public SaveFileCommand(TextFile textFile) {
        this.textFile = textFile;
    }

    @Override
    public void execute() {
        textFile.save();
    }
}
