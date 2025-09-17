#ifndef HIDROMETRO_H
#define HIDROMETRO_H

#include "Fluxo.h"
#include "Medicao.h"

class Hidrometro {
public:
    Hidrometro();

    void medir();
    void set_vazao_entrada(double vazao);
    void atualizar_volume(double tempo_horas);

    double get_volume_total() const;
    const Medicao& get_medicao() const;

private:
    Fluxo entrada;
    Fluxo saida;
    Medicao medicao;
};

#endif
