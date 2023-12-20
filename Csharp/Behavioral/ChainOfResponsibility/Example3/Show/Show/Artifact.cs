namespace Show
{
    public abstract class Artifact
    {
        protected Artifact NextArtifact;

        public void SetNext(Artifact next)
        {
            NextArtifact = next;
        }

        public abstract void Curse(string victim);

    }
}