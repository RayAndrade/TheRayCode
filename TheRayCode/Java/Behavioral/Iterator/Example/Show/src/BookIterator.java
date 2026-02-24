public class BookIterator implements Iterator  {
    private BookCollection bookCollection;
    private int index;

    public BookIterator(BookCollection bookCollection) {
        this.bookCollection = bookCollection;
        this.index = 0;
    }
    @Override
    public boolean hasNext() {
        return index < bookCollection.getBooks().length;
    }

    @Override
    public Object next() {
        if (this.hasNext()) {
            return bookCollection.getBooks()[index++];
        }
        return null;
    }
}
