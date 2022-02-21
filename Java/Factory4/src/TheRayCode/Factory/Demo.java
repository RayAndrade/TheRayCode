package TheRayCode.Factory;

public class Demo {
    public static void main(String[] args) {
        BatchProcessor batchProcessor = new BatchProcessor();
        String fileName = "fileName";
        batchProcessor.processBatch(fileName);
        System.out.println("The Ray Code is AWESOME!!!.");
    }
}
