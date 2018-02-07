#include "UnitatiDeLungime.h"

// Setter - i
void UnitatiDeLungime::setUnitatiDeLungime(int metri, int centimetri, int milimetri) {
    this->metri = metri;
    this->centimetri = centimetri;
    this->milimetri = milimetri;
}

void UnitatiDeLungime::setMetri(int metri) {
    this->metri = metri;
}

void UnitatiDeLungime::setCentimetri(int centimetri) {
    this->centimetri = centimetri;
}

void UnitatiDeLungime::setMilimetri(int milimetri) {
    this->milimetri = milimetri;
}

// Getter - i
string UnitatiDeLungime::getUnitatiDeLungime() {
    stringstream ss;

    ss << "Obiectul are marimile urmatoare: ";
    ss << metri;
    ss << " metri, ";
    ss << centimetri;
    ss << " centimetri, ";
    ss << milimetri;
    ss << " milimetri.";

    return ss.str();
}

int UnitatiDeLungime::getMetri() {
    return metri;
}

int UnitatiDeLungime::getCentimetri() {
    return centimetri;
}

int UnitatiDeLungime::getMilimetri() {
    return milimetri;
}

// Metode
void UnitatiDeLungime::convertUnits(UnitatiDeLungime object) {

}