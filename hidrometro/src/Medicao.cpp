#include "Medicao.h"
#include <cmath>

Medicao::Medicao()
    : consumo_m3(0.0), centenas_litros(0), dezenas_litros(0),
      litros(0), decimos_litros(0) {}

void Medicao::atualizar_medicao(double volume_total) {
    consumo_m3 = std::floor(volume_total);
    double parte_decimal = volume_total - consumo_m3;
    double litros_total = parte_decimal * 1000.0;

    centenas_litros = static_cast<int>(std::floor(litros_total / 100.0)) % 10;
    dezenas_litros = static_cast<int>(std::floor(litros_total / 10.0)) % 10;
    litros = static_cast<int>(std::floor(litros_total)) % 10;
    decimos_litros = static_cast<int>(std::floor(litros_total * 10.0)) % 10;
}

double Medicao::get_consumo_m3() const { return consumo_m3; }
int Medicao::get_centenas_litros() const { return centenas_litros; }
int Medicao::get_dezenas_litros() const { return dezenas_litros; }
int Medicao::get_litros() const { return litros; }
int Medicao::get_decimos_litros() const { return decimos_litros; }
