// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
package TheRayCode.Builder;
public class Main {
    public static void main(String[] args) {
        DessertBuilder builder = new DessertBuilder();
        Dessert applePie = builder.setName("Apple Pie")
                .setSugar(100)
                .setButter(50)
                .setBaked(true)
                .build();
        System.out.println(applePie);
    }
}