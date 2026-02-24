public class RestaurantFacade {
    private Kitchen kitchen;
    private BillingSystem billing;

    public RestaurantFacade(Kitchen kitchen, BillingSystem billing) {
        this.kitchen = kitchen;
        this.billing = billing;
    }

    public void orderFood(String order) {
        System.out.println("Order received for " + order);
        kitchen.prepareOrder(order);
        kitchen.completeOrder();
        billing.createBill(order);
        billing.processPayment();
    }

    // Additional methods to simplify other operations
}
