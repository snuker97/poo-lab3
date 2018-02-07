#ifndef _UNITATIDELUNGIME_H
#define _UNITATIDELUNGIME_H

#include <iostream>
#include <sstream>

using namespace std;

class UnitatiDeLungime {
private:
    int metri;
    int centimetri;
    int milimetri;

public:
    // Constructori
    UnitatiDeLungime(): metri(0), centimetri(0), milimetri(0) {

    };

    UnitatiDeLungime(int metri, int centimetri, int milimetri) {
        this->metri = metri;
        this->centimetri = centimetri;
        this->milimetri = milimetri;
    }

    UnitatiDeLungime(UnitatiDeLungime &other) {
        metri = other.metri;
        centimetri = other.centimetri;
        milimetri = other.milimetri;
    }

    // Setter - i
    void setUnitatiDeLungime(int metri, int centimetri, int milimetri);
    void setMetri(int metri);
    void setCentimetri(int centimetri);
    void setMilimetri(int milimetri);

    // Getter - i
    string getUnitatiDeLungime();
    int getMetri();
    int getCentimetri();
    int getMilimetri();

    // Supraincarcarea operatorilor
    UnitatiDeLungime operator+(UnitatiDeLungime object) {
        UnitatiDeLungime temp;

        temp.milimetri = (milimetri + object.milimetri) % 10;
        temp.centimetri = ((centimetri + object.centimetri) + ((milimetri + object.milimetri) / 10)) % 100;
        temp.metri = (metri + object.metri) + ((centimetri + object.centimetri) + ((milimetri + object.milimetri) / 10)) / 100;

        return (temp);
    }

    UnitatiDeLungime operator-(UnitatiDeLungime object) {
        UnitatiDeLungime temp;

        temp.milimetri = milimetri - object.milimetri;
        temp.centimetri = centimetri - object.centimetri;
        temp.metri = metri - object.metri;

        return temp;
    }

    UnitatiDeLungime operator*(UnitatiDeLungime object) {
        UnitatiDeLungime temp;

        temp.milimetri = (milimetri * object.milimetri) % 10;
        temp.centimetri = ((centimetri * object.centimetri) + ((milimetri * object.milimetri) / 10)) % 100;
        temp.metri = (metri * object.metri) + ((centimetri * object.centimetri) + ((milimetri * object.milimetri) / 10)) / 100;

        return temp;
    }

    UnitatiDeLungime operator/(UnitatiDeLungime object) {
        UnitatiDeLungime temp;

        temp.milimetri = milimetri / object.milimetri;
        temp.centimetri = centimetri / object.centimetri;
        temp.metri = metri / object.metri;

        return temp;
    }

    // Metode
    void convertUnits(UnitatiDeLungime object);

    // Destructor
    ~UnitatiDeLungime() {

    }
};

#endif //_UNITATIDELUNGIME_H
