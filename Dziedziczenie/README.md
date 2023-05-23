1. Wykonaj następujące polecenia:

• Napisz klasę Clothes zawierającą pola: prywatne: width (zmienna typu float), material (zmienna typu string)
oraz funkcje składowe o etykiecie dostępowej public:

• konstruktor domyślny (domniemany), który poprzez listę inicjalizacyjną nadaje polom
wartości: 0.0, ”none” oraz wyświetla tekst na standardowym wyjściu: „Konstruktor
domyslny – klasa podstawowa Clothes”,

• Destruktor wypisujący napis: ”Destruktor – klasa podstawowa Clothes,

• metodę is available() wyświetlającą tekst ”Yes, it is available – klasa podstawowa
Clothes”.

• tzw. metody Getters – umożliwiające dostęp do pól prywatnych klasy, pobieranie ich
wartości, czyli stwórz funkcje: get width() zwracającą pole width oraz get material(),
która zwraca pole material . Pamiętaj, że są to tzw. funkcje dostępowe, przez co powinny posiadać odpowiednie słówko kluczowe.
2. Utwórz klasę pochodną Trousers klasy podstawowej Clothes o specyfikatorze dostępu
public na liście pochodzenia. Stwórz metody o etykiecie dostępowej public:

• konstruktor domyślny wykorzystujący w liście inicjalizacyjnej konstruktor klasy podstawowej oraz wypisujący tekst: ”Konstruktor domyślny – klasa pochodna Trousers”,

• Destruktor wypisujący napis ”Destruktor – klasa pochodna Trousers”,
3. W pętli głównej programu:

• Utwórz obiekt klasy Trousers.

• Dla stworzonego obiektu wywołaj metody klasy Clothes: is available(), get material(),
get width().
4. Odpowiedz na pytania:

(a) Działanie którego konstruktora zaobserowałeś i dlaczego?

(b) Czy udało się wywołać metody klasy podstawowej dla obiektu klasy pochodnej? Dlaczego?

(c) Czy zauważyłeś działanie destruktora? Jeżeli tak, to jakiego i dlaczego?


Do klasy podstawowej dodaj składową protected o nazwie price (zmienna typu string). Następnie do klasy Trousers dodaj metody public:

• set price – ustawia wartość pola price na wartość przekazaną w argumencie,

• display information – wyświetlającą napis ”Price: ” oraz wartość pola price.

Korzystając z odpowiednich metod, w pętli głównej programu, nadaj wcześniej utworzonemu
obiektowi cenę 150.99 oraz wyświetl o nim informacje. W komentarzu odpowiedz na pytanie:
Wyjaśnij dlaczego istnieje możliwość nadania wartości polu w klasie podstawowej poprzez metodę
klasy pochodnej?

Utwórz klasę Skirt, która jest klasą pochodną klasy Clothes z dziedziczeniem public i zaimplementuj dla niej:

• pola prywatne: width oraz material .

• Konstruktor wieloargumentowy z wykorzystaniem listy inicjalizacyjnej, wyświetlający tekst:
”Konstruktor wieloargumentowy - klasa pochodna Skirt”.

• metody Getters umożliwiające dostęp do pól prywatnych o nazwach: get width() oraz
get material().
Utwórz w głównej pętli programu obiekt klasy Skirt i nadaj mu wartości poprzez stworzony
konstruktor. Wykonaj poszczególne kroki (na wszelkie pytania odpowiadaj w komentarzach):

• Wyświetl wartości pól prywatnych, pamiętaj, że aby się do nich dostać należy wykorzystać
„gettery”. Jakie wartości zostały wyświetlone?

• Wywołaj „gettery” na rzecz tego samego obiektu w głównej pętli programu, ale tym razem
dopisz przed ich wywołaniem deklarację dostępu, czyli np. Clothes::get material().
Jakie wartości uzyskałeś tym razem?

• Na podstawie uzyskanych rezultatów wyjaśnij, co się dzieje w momencie, gdy klasa pochodna i klasa podstawowa posiadają pola lub metody o tych samych nazwach? Jakie pola
(swoje i odziedziczone) posiada obiekt klasy pochodnej Skirt? Wypisz je.
