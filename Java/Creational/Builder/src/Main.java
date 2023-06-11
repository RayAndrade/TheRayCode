

public class Main {
    public static void main(String[] args) {
        DessertBuilder builder = new DessertBuilder();
        Dessert applePie = builder.setName("Apple Pie")
                .setSugar(100)
                .setButter(50)
                .setBaked(true)
                .build();
        System.out.println(applePie);

          //System.out.printf("TheRay Code is AWESOME!!!");
     }
}