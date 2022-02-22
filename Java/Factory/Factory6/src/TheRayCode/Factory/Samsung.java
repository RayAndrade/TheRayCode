package TheRayCode.Factory;

public class Samsung implements Mobile {
    private int ramSize;
    private String processor;
    public String name = Mobile.SAMSUNG;
    public Samsung(int ramSize){
        this.ramSize = ramSize;
    }

    public Samsung(String processor){
        this.processor = processor;
        this.ramSize =2;
    }
}
