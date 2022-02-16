package TheRayCode.Show.Factory7;
//https://www.youtube.com/watch?v=KgfpICxwOOM
public class Exec {
    public static void main(String[] args) {
        Mobile mobile = MobileFactory.createMobile(Mobile.SAMSUNG);
        //mobile.toString();
        System.out.println(mobile);
    }
}
