namespace Progam;

public class Singleton
{
    private static Singleton? _instance;
    private static readonly object _lock = new object();
    
    private Singleton()
    {
        Console.WriteLine("Singleton instance created.");
    }
    public static Singleton Instance()
    {
        if (_instance == null)  // First check (without lock)
        {
            lock (_lock)  // Ensure thread safety
            {
                if (_instance == null)  // Second check (inside lock)
                {
                    _instance = new Singleton();
                }
            }
        }
        return _instance;
    }
    public void ShowMessage()
    {
        Console.WriteLine("Hello from Singleton!");
    }
    
}