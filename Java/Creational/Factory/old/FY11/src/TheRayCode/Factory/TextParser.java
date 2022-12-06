package TheRayCode.Factory;

import java.io.File;
import java.util.List;

public class TextParser implements Parser{

    public TextParser(){ };

    public TextParser(File file){
           System.out.println("Creating TEXT parser.");
    }

    public List<Record>parse(){
        System.out.println("Parsing TEXT and creating list");
        return null;
    }
}
