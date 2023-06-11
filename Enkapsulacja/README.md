1. Wykonaj następujące polecenia:

• Napisz klasę Komiks zawierającą publiczne pola: tytul, autor, wydawca.

• Napisz funkcję o nazwie wypisz, która jako argument otrzymuje obiekt tej klasy i wypisuje na standardowym wyjściu wartości pól otrzymanego w argumencie obiektu.

• Napisz funkcję wczytaj, która jako argument otrzymuje referencję do obiektu i wczytuje ze standardowego wejścia wartości pól obiektu, do którego referencje otrzymała w argumencie. 
 Zauważ, że może wystąpić potrzeba wczytania napisu kilkuczłonowego, czyli razem ze spacją. Przygotuj swój program na tego rodzaju przypadek.
 
• Dopisz do klasy metody: wczytującą (ze standardowego wejścia dane dla pól obiektu) i wypisującą pola obiektu.

• Zaprezentuj działanie utworzonych funkcji tworząc obiekty statyczne.

• Zmień dostęp tylko do pól klasy z publicznego na prywatny. Funkcje składowe (metody) niech pozostaną publiczne. Przetestuj i odpowiedz na pytanie w komentarzu
w kodzie: Czy stworzone przez Ciebie funkcje składowe i funkcje nie będące składowymi klasy będą nadal działać? Jeśli tak, to które i dlaczego?

2. (hermetyzacja, konstruktor, destruktor, lista inicjalizacyjna, funkcje dostępowe). Utwórz klasę o nazwie Pokoj posiadającą składowe prywatne:

• nazwa – zmienna typu string

• dlugosc – zmienna typu float

• wysokosc – zmienna typu float,

• szerokosc – zmienna typu float.

Następnie wykonaj poniższe kroki:

• Utwórz konstruktor wieloargumentowy, który podczas tworzenia obiektu nada polom
klasy wartości przekazane w argumentach. Definicję konstruktora umieść poza klasą. Dodatkowo w konstruktorze wyświetl na standardowym wyjściu tekst: Nadanie
wartosci – konstruktor wieloargumentowy.

• Utwórz destruktor, który w swoim ciele jedynie wyświetla na standardowym wyjściu
tekst: Likwiduje!.

• Wywołaj konstruktor dla stworzonego obiektu statycznego.

3. Kontynuuj tworzenie programu z poprzedniego zadania, na pytania odpowiedz w komentarzach w kodzie:

• Dokonaj inicjalizacji pól w klasie danymi: Sypialnia, 4.5, 2.5, 2.5.

• Utwórz metodę o nazwie wyswietl dane, która pozwoli wyświetlić na standardowym
wyjściu wartości obiektu.

• Wyświetl dane utworzonego w poprzednim zadaniu obiektu statycznego poprzez utworzoną metodę. Zaobserwuj działanie programu.

• Utwórz konstruktor domyślny, który jedynie wyświetla napis: Nadanie wartosci –
konstruktor domyslny, a poza tym nic nie robi. Następnie utwórz obiekt statyczny i
wyświetl jego dane, czyli zaprezentuj działanie konstruktora domyślnego.

• Jakie wartości zostały wyświetlone dla stworzonego obiektu?

• Czy dla utworzonej przez Ciebie klasy było konieczne zdefiniowanie konstruktora domyślnego jawnie, aby mógł on zostać wywołany?

• Czy dla stworzonych obiektów można zauważyć działanie destruktora bez jego jawnego wywołania na rzecz obiektu? Dlaczego tak się dzieje?

4.Kontynuuj program z poprzedniego
zadania, na pytania odpowiedz w komentarzach w kodzie:

• Skopiuj kod konstruktora wieloargumentowego w celu jego modyfikacji. Pozostaw jednak dotychczasową implementację zakomentowaną. Przerób konstruktor w taki sposób, aby wykorzystać w nim listę inicjalizacyjną. Czy uzyskany efekt różni się od tego,
jaki uzyskaliśmy przy poprzedniej implementacji konstruktora?

• W klasie możemy zdefiniować tzw. funkcje modyfikujące i funkcje dostępowe. Te drugie powinny zostać zdefiniowane ze słowem kluczowym const. Umieść je przy odpowiednich, stworzonych w tym zadaniu przez siebie funkcjach.

• Wyjaśnij, dlaczego akurat przy tych funkcjach użyłeś słowa kluczowego const?

• Ile destruktorów może mieć klasa?
