public class Main {
    public static void main(String[] args) {

        Ghost[] ghosts = new Ghost[]{
                new Poltergeist(),
                new WailingSpirit(),
                new ShadowFigure()
        };

        CreepyManor manor = new CreepyManor();
        for (Ghost ghost : ghosts) {
            ghost.haunt(manor);
        }

    }
}