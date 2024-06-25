public class WizardFactory extends MagicalFactory{
    @Override
    public MagicalBeing createMagicalBeing() {
        return new Wizard();
    }
}
