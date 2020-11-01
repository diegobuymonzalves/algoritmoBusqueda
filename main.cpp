#include <iostream>
#include <algorithm>
#include <string>
#include <array>
#include <fcntl.h>
#include <io.h>
#include "data.h"

int searchBin(const std::array<Country, MAX_COUNTRYS> &data, const std::wstring &key);
void printInfo(const Country &country);
std::wstring str_tolower(std::wstring s);

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    std::sort(countrys.begin(), countrys.end(),
        [](const Country &a, const Country &b) {return a.nombre < b.nombre;}
    );
    std::wcout << L"Buscar información de un país por su nombre.\n";
    std::wcout << L"Escriba \"fin\" para dejar de buscar.\n";
    std::wcout << L"Se utilizará el algoritmo de busqueda binaria.\n";
    std::wstring country;
    std::wstring aux;
    int position;
    while(true) {
        std::wcout << L"País> ";
        std::getline(std::wcin, country);
        std::getline(std::wcin, aux);
        if(country == L"fin")
            break;
        position = searchBin(countrys, str_tolower(country));
        if(position == -1) {
            std::wcout << L"No se encontro el país: " << country << std::endl;
        } else {
            printInfo(countrys[position]);
        }
    }
}

/**
* Buscar el nombre de un país, empleando el algoritmo
* de búsqueda binaria.
*/
int searchBin(const std::array<Country, MAX_COUNTRYS> &data,
              const std::wstring &key) {
    int central;
    int bajo = 0;
    int alto = data.size() - 1;
    std::wstring valorCentral;

    while(bajo <= alto) {
        central = (bajo + alto)/2;
        valorCentral = str_tolower(countrys[central].nombre);
        if(key == valorCentral)
            return central;
        else if(key < valorCentral)
            alto = central - 1;
        else
            bajo = central + 1;
    }
    return -1;
}

void printInfo(const Country &country) {
    std::wcout << L"Información de " << country.nombre << std::endl;
    std::wcout << L"Nombre en inglés: " << country.name << std::endl;
    std::wcout << L"ISO2: " << country.iso2 << std::endl;
    std::wcout << L"ISO3: " << country.iso3 << std::endl;
    std::wcout << L"Código telefonico: " << country.phone_code << std::endl;
}

std::wstring str_tolower(std::wstring s) {
    std::transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c){ return std::tolower(c); });
    return s;
}
