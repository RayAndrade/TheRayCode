package TheRayCode.Show.Factory7;

public class IPhone implements Mobile {

    private int ramSize;
    private String processor;
    private String GPU;
    public IPhone(int ramSize, String processor, String GPU){
        this.ramSize = ramSize;
        this.processor = processor;
        this.GPU = GPU;
    }

}
