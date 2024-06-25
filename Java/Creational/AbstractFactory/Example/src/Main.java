public class Main {
    public static void main(String[] args) {
        MagicalFactory wizardFactory = new WizardFactory();
        MagicalFactory warriorFactory = new WarriorFactory();

        MagicalBeing wizard = wizardFactory.createMagicalBeing();
        MagicalBeing warrior = warriorFactory.createMagicalBeing();

        wizard.displayPower();
        warrior.displayPower();
    }
}