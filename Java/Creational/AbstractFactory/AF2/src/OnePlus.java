public class OnePlus extends Device{
    private String ram;
    private String processor;
    public OnePlus (String ramSize, String processorType){
        this.ram =ramSize;
        this.processor=processorType;
    }

    @Override
    public String getDetails() {
        return "OnePlus config is ram size " + this.ram + " and processor type is " + this.processor;
    }

    @Override
    public String toString(){
        return "OnePlus{" +
                "ram='" + ram + '\'' +
                ", processor='" + processor + '\'' +
                '}';
    }
}
