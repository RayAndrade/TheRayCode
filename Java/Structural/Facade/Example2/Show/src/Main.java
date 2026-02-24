public class Main {
    public static void main(String[] args) {
        Amplifier amp = new Amplifier();
        DvdPlayer dvd = new DvdPlayer();

        HomeTheaterFacade homeTheater = new HomeTheaterFacade(amp, dvd);
        homeTheater.watchMovie("Inception");
    }
}