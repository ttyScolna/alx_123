//Napisz klasę Kwadrat, która będzie przechowywać informację o dlugosci boku kwadratu oraz
//będzie posiadać getter i setter do boku i metodę double pole() const zwracającą pole powierzchni

//Napisz klasę Prostokat, która będzie przechowywać informację o dlugosci boków prostokata oraz
//będzie posiadać gettery i settery do boków i metodę double pole() const zwracającą pole powierzchni

#include <iostream>

class Kwadrat {
public:
    Kwadrat(double bok);
    double getBok() const;
    void setBok(double bok);
    double pole() const;
private:
    double bok;
};

class Prostokat {
public:
    Prostokat(double bok, double bok2);
    double getBok() const;
    double getBok2() const;
    void setBok(double bok);
    void setBok2(double bok);
    double pole() const;
private:
    double bok;
    double bok2;
};

Kwadrat::Kwadrat(double bok) : bok{bok} {}

double Kwadrat::getBok() const {
    return bok;
}

void Kwadrat::setBok(double bok) {
    this->bok = bok;
}

double Kwadrat::pole() const {
    return bok * bok;
}

Prostokat::Prostokat(double bok, double bok2) : bok{bok}, bok2{bok2} {}

double Prostokat::getBok() const {
    return bok;
}

double Prostokat::getBok2() const {
    return bok2;
}

void Prostokat::setBok(double bok) {
    this->bok = bok;
}

void Prostokat::setBok2(double bok) {
    this->bok2 = bok;
}

double Prostokat::pole() const {
    return bok * bok2;
}


int main() {
    Kwadrat k{5};
    std::cout << k.pole() << '\n';
    Prostokat p{3, 7};
    std::cout << p.pole() << '\n';
}
