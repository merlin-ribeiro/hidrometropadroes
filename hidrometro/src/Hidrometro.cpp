#include "Hidrometro.h"

Hidrometro::Hidrometro() : entrada(), saida(), medicao() {}

void Hidrometro::medir() {
    medicao.atualizar_medicao(entrada.get_volume_total());
}

void Hidrometro::set_vazao_entrada(double vazao) {
    entrada.set_vazao(vazao);
}

void Hidrometro::atualizar_volume(double tempo_horas) {
    entrada.incrementar_volume(tempo_horas);
}

double Hidrometro::get_volume_total() const {
    return entrada.get_volume_total();
}

const Medicao& Hidrometro::get_medicao() const {
    return medicao;
}
