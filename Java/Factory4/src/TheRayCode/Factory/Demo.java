package TheRayCode.Factory;

/**
 * https://www.youtube.com/watch?v=EdIwFK0gCm4
 *  Factory Method Design Pattern in Java, tutorial
 *   Ranjith ramachandran
 */
public class Demo {
    public static void main(String[] args) {


        String fileName = "fileName";
        String format = "csv";
        BatchProcessor batchProcessor = createBatchProcessor(format);//new BatchProcessor();

        assert batchProcessor != null;
        batchProcessor.processBatch(fileName);
        System.out.println("The Ray Code is AWESOME!!!.");
    }

    private static BatchProcessor createBatchProcessor(String format) {
        if(format.equals("text")) return new TextBatchProcessor();
        if(format.equals("csv")) return new CSVBatchProcessor();
        if(format.equals("xml")) return new XMLBatchProcessor();
        return null;
    }
}
