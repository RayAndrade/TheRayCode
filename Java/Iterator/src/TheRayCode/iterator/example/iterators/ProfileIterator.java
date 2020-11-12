package TheRayCode.iterator.example.iterators;

import TheRayCode.iterator.example.profile.Profile;

public interface ProfileIterator {
    boolean hasNext();

    Profile getNext();

    void reset();
}
