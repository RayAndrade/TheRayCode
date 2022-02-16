package TheRayCode.Show.Factory7;

public class MobileFactory {

    public static Mobile createMobile(String type){
        if(type.equals(Mobile.IPHONE)){
            return new IPhone(2, "A9", "A9 GPu");
        }else if(type.equals(Mobile.SONY)){
            return new Sony(2,"ARM");
        }else if(type.equals(Mobile.SAMSUNG)){
            return new Samsung("Intel");
        }else{
            return null;
        }
    }

}
