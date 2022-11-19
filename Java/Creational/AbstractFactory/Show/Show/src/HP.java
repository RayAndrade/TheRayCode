public class HP extends Device{
    private String ram;
    private String processor;
    private String gpu;

    public HP(String ramSize, String processorType, String gpuType){
        this.ram =ramSize;
        this.processor=processorType;
        this.gpu=gpuType;
    }

    @Override
    public String getDetails() {
        return "HP config is ram size " + this.ram + " and processor type is " + this.gpu + " and gpuType is " + this.gpu;
    }

    @Override
    public String toString(){
        return "HP{" +
                "ram='" + ram + '\'' +
                ", processor='" + processor + '\'' +
                '}';
    }
}
