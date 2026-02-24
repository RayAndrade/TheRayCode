public class ShadowFigure  implements Ghost{
    @Override
    public void haunt(HauntedHouse house) {
        house.react(this);
    }
}
