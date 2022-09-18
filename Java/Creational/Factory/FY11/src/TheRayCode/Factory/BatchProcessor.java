package TheRayCode.Factory;

import java.io.File;
import java.util.List;

public abstract class BatchProcessor {

    public final void processBatch(String fileName){
        File file = openFile(fileName);
        Parser parser = createParser(file); //FACTORY

        // Request to do csv also, and then text.
        // Factory method
        /* t=18:15
        if(format.equals("text")){
            parser = new TextParser(file);
        }else if(format.equals("csv")){
            parser = new CSVParser(file);
        }else if(format.equals("xml")){
            parser = new XMLParser(file);
        }
        */

        List<Record> records = parser.parse();
        processRecords(records);
        writeSummary();
        closeFile(file);
    }
    public abstract Parser createParser(File file);

    private File openFile(String fileName) {
        System.out.println("Open file.");
        return null;
    }

    private void processRecords(List<Record> records) {
        System.out.println("Processing each record, db calls, etc..");
    }

    private void writeSummary() {
        System.out.println("Wrote batch summary 0 failed.");
    }

    private void closeFile(File file) {
        System.out.println("Close File");
    }
}
