public class BookCollection implements Aggregate{
    private String[] books;

    public BookCollection(String[] books) {
        this.books = books;
    }
    @Override
    public Iterator createIterator() {
        return new BookIterator(this);
    }

    public String[] getBooks() {
        return books;
    }
}
