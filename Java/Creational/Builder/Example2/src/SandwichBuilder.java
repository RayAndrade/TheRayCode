public interface SandwichBuilder {
    void buildBread();
    void buildProtein();
    void buildCondiments();
    void buildVeggies();
    Sandwich getSandwich();
}
