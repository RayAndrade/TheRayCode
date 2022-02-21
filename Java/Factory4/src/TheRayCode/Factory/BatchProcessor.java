package TheRayCode.Factory;

import java.io.File;
import java.util.List;

public class BatchProcessor {
    public void processBatch(String fileName){
        File file = openFile(fileName);
        TextParser parser = new TextParser(file);
        List<Record> records = parser.parse();
        processRecords(records);
        writeSummary();
        closeFile(file);
    }

    private File openFile(String fileName) {
        System.out.println("Open file.");
        return null;
    }

    private void processRecords(List<Record> records) {
    }

    private void writeSummary() {
        System.out.println("Wrote batch summary 0 failed.");
    }

    private void closeFile(File file) {
        System.out.println("Close File");
    }
}
