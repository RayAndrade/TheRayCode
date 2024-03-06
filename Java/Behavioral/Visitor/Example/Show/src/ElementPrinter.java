public class ElementPrinter implements Visitor  {
    @Override
    public void visit(TextElement textElement) {
        System.out.println("Text: " + textElement.getText());
    }

    @Override
    public void visit(ImageElement imageElement) {
        System.out.println("Image: " + imageElement.getImageName());
    }
}
