using System;

namespace Show
{
    public class SpellProxy: IMagicSpell
    {
        private FireballSpell _fireballSpell;

        public SpellProxy(FireballSpell fireballSpell)
        {
            _fireballSpell = fireballSpell;
        }

        public void CastSpell()
        {
            if (PerformMagicCheck())
            {
                _fireballSpell.CastSpell();
                LogSpellUsage();
            }
            else
            {
                Console.WriteLine("SpellProxy: Oops! Your wand flickered. Spell failed.");
            }
        }
        private bool PerformMagicCheck()
        {
            // Here, we could have some logic to check if the wizard is powerful enough.
            Console.WriteLine("SpellProxy: Checking magical energies before casting.");
            return new Random().Next(0, 2) > 0; // Randomly decide if the spell can be cast.
        }

        private void LogSpellUsage()
        {
            Console.WriteLine("SpellProxy: Logging spell usage in the magical ledger.");
        }
    }
}