package TheRayCode;

import TheRayCode.impl.*;
import TheRayCode.proxy.*;

public class Demo {
    public static void main(String[] args) {

        VeryExpensiveProcess veryExpensiveProcess = new VeryExpensiveProcessProxy();
        veryExpensiveProcess.process();
        veryExpensiveProcess.process();
    }
}
