package TheRayCode.Factory;

import java.io.File;
import java.util.List;

public class XMLParser extends TextParser {
    public XMLParser(File file) {
        System.out.println("Created XML Parser");
    }
    @Override
    public List<Record> parse(){
        System.out.println("Parsing XML values.");
        return null;
    }
}
