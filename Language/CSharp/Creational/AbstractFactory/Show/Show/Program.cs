// See https://aka.ms/new-console-template for more information

using Show;

ISuperheroFactory dcFactory = new DCSuperheroFactory();
var dcHero = dcFactory.CreateDCHero();
Console.WriteLine(dcHero.SaveTheDay());

ISuperheroFactory marvelFactory = new MarvelSuperheroFactory();
var marvelHero = marvelFactory.CreateMarvelHero();
Console.WriteLine(marvelHero.SaveTheDay());