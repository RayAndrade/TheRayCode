<?php
class Facade
{
    protected $subsystem1;

    protected $subsystem2;

    /**
     * Depending on your application's needs, you can provide the Facade with
     * existing subsystem objects or force the Facade to create them on its own.
     */
    public function __construct(
        SubsystemA $subsystem1 = null,
        SubsystemB $subsystem2 = null
    ) {
        $this->subsystem1 = $subsystem1 ?: new SubsystemA;
        $this->subsystem2 = $subsystem2 ?: new SubsystemB;
    }

    /**
     * The Facade's methods are convenient shortcuts to the sophisticated
     * functionality of the subsystems. However, clients get only to a fraction
     * of a subsystem's capabilities.
     */
    public function operation(): string
    {
        $result = "Facade initializes subsystems:<br/>";
        $result .= $this->subsystem1->operation1();
        $result .= $this->subsystem2->operation1();
        $result .= "Facade orders subsystems to perform the action:<br/>";
        $result .= $this->subsystem1->operationN();
        $result .= $this->subsystem2->operationZ();

        return $result;
    }
}