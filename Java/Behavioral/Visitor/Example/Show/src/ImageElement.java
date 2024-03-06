public class ImageElement implements Element {

    private String imageName;

    public ImageElement(String imageName) {
        this.imageName = imageName;
    }

    public String getImageName() {
        return imageName;
    }

    @Override
    public void accept(Visitor visitor) {
        visitor.visit(this);
    }
}
