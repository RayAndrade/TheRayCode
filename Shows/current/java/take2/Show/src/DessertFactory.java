public class DessertFactory {
    public Dessert getDessert(String dessertType){
        if(dessertType == null){
            return null;
        }
        if(dessertType.equalsIgnoreCase("sundae")){
            return new Sundae();
        } else if(dessertType.equalsIgnoreCase("pie")){
            return new Pie();
        }
        return null;
    }
}
