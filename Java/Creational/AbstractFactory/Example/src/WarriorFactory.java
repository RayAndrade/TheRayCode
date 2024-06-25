public class WarriorFactory extends MagicalFactory {
    @Override
    public MagicalBeing createMagicalBeing() {
        return new Warrior();
    }
}
