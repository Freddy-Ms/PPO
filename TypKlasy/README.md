	1. Napisz funkcję, która w argumentach przyjmuje dwie zmienne i zwraca tę, której wartość
jest mniejsza. Wykorzystaj w tym celu tzw. szablon funkcji i zademonstruj jej działanie
dla dwóch zmiennych typu: int, double.
	2. Zbuduj prosty kalkulator używając szablonu klas. Dzięki temu będzie mógł on działać dla
liczb dowolnego typu. Cały program napisz w jednym pliku *.cpp, a definicje poszczególnych funkcji składowych zapisz w ciele szablonu klasy. Niech posiada on dwa pola prywatne
reprezentujące dwie podane liczby oraz metody publiczne:
• konstruktor wieloargumentowy (użyj listy inicjalizacyjnej),
• metodę, która przeprowadza operację dodawania,
• metodę, która przeprowadza operację odejmowania,
• metodę, która przeprowadza operację mnożenia,
• metodę, która przeprowadza operację dzielenia,
• metodę, która podnosi pierwszy podany argument do kwadratu,
• metodę, która mnoży pierwszy podany argument razy liczbę π – wartość liczby π
uzyskasz z odpowiedniej biblioteki matematycznej,
• metodę wyświetlającą podane liczby, wynik dodawania, wynik odejmowania, wynik
mnożenia, wynik dzielenia.

	Zmodyfikuj zadanie numer 2. Podziel napisany program na plik źródłowy i plik nagłówkowy oraz
zapisz definicje funkcji składowych poza ciałem szablonu klasy. Wykorzystaj informacje zawarte
we wprowadzeniu.

	Czy słyszałeś kiedyś o tzw. kodzie Cezara? Jest to jeden z historycznych sposobów szyfrowania
tajnych wiadomości. Opiera się on na przesunięciu liter o trzy pozycje w przód 
Jak widać, szyfrowane są tylko litery, natomiast spacje, znaki przestankowe i inne takie
pozostają bez zmian. Do ”innych takich” zaliczają się również polskie ogonki.
Zdekodowanie wiadomości wymaga wykonania tego samego algorytmu, ale tym razem z przesunięciem wynoszącym -3. Oczywiście nic nie stoi na przeszkodzie, aby zamiast przesunięć o 3/-3,
stosować przesunięcia o dowolną inną liczbę, uzgodnioną pomiędzy nadawcą a odbiorcą tajnych
komunikatów.
Zaimplementuj szablony funkcji szyfrujących i deszyfrujących łańcuchy. Wielkość
przesunięcia ma być podawana jako parametr szablonu. Rozdziel kod na dwa pliki źródłowe -
jeden zawierający funkcje szyfrujące (będący swego rodzaju mini-biblioteką), drugi zawierający
główną pętlę programu main(). Zademonstruj działanie programu