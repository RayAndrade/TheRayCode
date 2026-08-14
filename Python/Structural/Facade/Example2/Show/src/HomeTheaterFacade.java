public class HomeTheaterFacade {

    private Amplifier amp;
    private DvdPlayer dvd;

    public HomeTheaterFacade(Amplifier amp, DvdPlayer dvd) {
        this.amp = amp;
        this.dvd = dvd;
    }

    public void watchMovie(String movie) {
        System.out.println("Get ready to watch a movie...");
        amp.on();
        amp.setVolume(5);
        dvd.on();
        dvd.play(movie);
    }

    // Additional methods to simplify other operations
}
