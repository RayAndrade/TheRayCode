public class ConcreteSheepIterator  implements SheepIterator{

    private SheepCollection sheepCollection;
    private int index;

    public ConcreteSheepIterator(SheepCollection sheepCollection) {
        this.sheepCollection = sheepCollection;
        this.index = 0;
    }

    @Override
    public boolean hasNext() {
        return index < sheepCollection.getSheepCounts().length;
    }

    @Override
    public Object next() {
        if (this.hasNext()) {
            return sheepCollection.getSheepCounts()[index++] + " sheep";
        }        return null;
    }
}
