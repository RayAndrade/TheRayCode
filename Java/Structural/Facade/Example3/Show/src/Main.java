public class Main {
    public static void main(String[] args) {

        Kitchen kitchen = new Kitchen();
        BillingSystem billing = new BillingSystem();

        RestaurantFacade restaurant = new RestaurantFacade(kitchen, billing);
        restaurant.orderFood("Pizza Margherita");
    }
}