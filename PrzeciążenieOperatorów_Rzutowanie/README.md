Należy:

1. utworzyć przeciążenie operatora <<, jako funkcję składową klasy w celu wyświetlenia
obiektu powyższej klasy,

2. utworzyć przeciążenie operatora >>, jako funkcję składową klasy w celu umożliwienia
wpisywania parametrów obiektu powyższej klasy,

3. utworzyć przeciążenie operatora +, jako funkcję składową klasy umożliwiającą dodanie do
siebie dwóch wektorów.

Sprawdź działanie wszystkich zaimplementowanych funkcjonalności. Następnie zmień pola
klasy na publiczne i zakomentuj przeciążenie operatorów << oraz >> i utwórz ich przeciążenia
jako funkcje globalne. Zaprezentuj aktualną implementację funkcjonalności programu.

Odpowiedz na pytanie:

1. Czy po zmianie implementacji efekt działania był inny?

2. Co należało zmienić w implementacji?

3. Jakiego mechanizmu należało użyć w celu korzystania ze składników prywatnych klasy i
dlaczego?


Kontynuuj tworzenie programu. Utwórz klasę reprezentującą zbiór wektorów. Posiada ona pole
publiczne, którym jest kontener na dane vector przechowujący wektory trójwymiarowe – typ
reprezentowany przez wcześniej stworzoną klasę. Następnie utwórz:

1. przeciążenie operatora += jako funkcję składową, która umożliwia dodawanie do kontenera
vector kolejnych wektorów (w celu dodawania elementów do wektora wykorzystaj funkcję
biblioteczną).

2. przeciążenie operatora << dla klasy zbioru wektorów będące funkcją globalną, która umożliwia wyświetlenie poszczególnych elementów kontenera vector. Użyj w tym celu iteratora
(iterator).

W głównej pętli programu utwórz obiekt klasy reprezentującej zbiór wektorów oraz zaprezentuj działanie poszczególnych funkcjonalności, a więc: dodaj dwa wektory 3D (dwa obiekty) do
kontenera vector będącego częścią obiektu reprezentującego ich zbiór używając przeciążenia
operatora += i a następnie wyświetl zawartość obiektu.


Utwórz klasę reprezentującą wektor 2D, posiadający dwa pola publiczne reprezentujące jego
współrzędne. Następnie w głównej pętli programu utwórz obiekty reprezentujące: wektor 2D
i wektor 3D, a później dokonaj rzutowania statycznego wektora 3D na wektor 2D (używając
static cast). Pamiętaj, aby zdefiniować konwersję typów.