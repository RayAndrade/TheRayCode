package TheRayCode.mediator.example.components;

import TheRayCode.mediator.example.mediator.Mediator;

/**
 * Common component interface.
 */
public interface Component {
    void setMediator(Mediator mediator);
    String getName();
}



