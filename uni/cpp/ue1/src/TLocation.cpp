#include "TLocation.h"
#include <stdio.h>

TLocation::TLocation() {
    _section="Büro";
    _rack="Fach zum Einsortieren";
}

TLocation::TLocation(string section, string rack) {
    _section=section;
    _rack=rack;
}

void TLocation::setSection(string section) {
    _section=section;
}

void TLocation::setRack(string rack) {
    _rack=rack;
}

string TLocation::getSection() {
    return _section;
}

string TLocation::getRack() {
    return _rack;
}

void TLocation::print() {
    printf ("sect: %s | rack: %s", _section.c_str(), _rack.c_str());
}
