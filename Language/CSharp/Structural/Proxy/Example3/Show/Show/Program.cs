namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            FireballSpell fireballSpell = new FireballSpell();
            SpellProxy spellProxy = new SpellProxy(fireballSpell);
            spellProxy.CastSpell();
        }
    }
}