public class Main {
    public static void main(String[] args)
    {
        PrettyWoman prettyWoman = new PrettyWoman();
        Sailor sailor1 = new Sailor("Sailor 1");
        Sailor sailor2 = new Sailor("Sailor 2");

        prettyWoman.addObserver(sailor1);
        prettyWoman.addObserver(sailor2);

        prettyWoman.flirt();
        prettyWoman.reject();

    }
}