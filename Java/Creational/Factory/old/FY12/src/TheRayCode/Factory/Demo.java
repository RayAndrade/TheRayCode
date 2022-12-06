package TheRayCode.Factory;

public class Demo {
    public static void main(String[] args) {

        Mobile mobile = MobileFactory.createMobile(Mobile.SAMSUNG);
        System.out.println(mobile);
        String msg = mobile.toString();
        System.out.println(msg);
        System.out.println("The Ray Code is AWESOME!!!.");
    }
}
