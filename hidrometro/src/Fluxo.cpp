#include "Fluxo.h"

Fluxo::Fluxo(double vazao, double pressao, double volume)
    : vazao_(vazao), pressao_(pressao), volume_total_(volume) {}

double Fluxo::get_vazao() const { return vazao_; }
void Fluxo::set_vazao(double v) { vazao_ = v; }

double Fluxo::get_pressao() const { return pressao_; }
void Fluxo::set_pressao(double p) { pressao_ = p; }

double Fluxo::get_volume_total() const { return volume_total_; }
void Fluxo::set_volume_total(double v) { volume_total_ = v; }

void Fluxo::incrementar_volume(double tempo_horas) {
    volume_total_ += vazao_ * tempo_horas;
}
