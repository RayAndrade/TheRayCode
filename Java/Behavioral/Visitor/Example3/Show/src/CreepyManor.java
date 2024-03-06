public class CreepyManor implements HauntedHouse {
    @Override
    public void react(Poltergeist poltergeist) {
        System.out.println("Objects start flying across the room!");
    }

    @Override
    public void react(WailingSpirit spirit) {
        System.out.println("Eerie wails fill the air, sending shivers down your spine.");
    }

    @Override
    public void react(ShadowFigure shadow) {
        System.out.println("A shadow passes by the corner of your eye, but nothing is there when you look.");
    }
}
