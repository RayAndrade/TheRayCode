package TheRayCode.impl;

import TheRayCode.proxy.*;

public class VeryExpensiveProcessProxy implements VeryExpensiveProcess {

    private static VeryExpensiveProcess veryExpensiveObject;

    /*    Now we will utilize the Proxy pattern and initialize
        our Expansive object on demand*/
    @Override
    public void process() {
        if (veryExpensiveObject == null) {
            veryExpensiveObject = new VeryExpensiveProcessImpl();
        }
        veryExpensiveObject.process();
    }
}
