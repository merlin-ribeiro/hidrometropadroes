#ifndef MEDICAO_H
#define MEDICAO_H

class Medicao {
public:
    Medicao();

    void atualizar_medicao(double volume_total);

    double get_consumo_m3() const;
    int get_centenas_litros() const;
    int get_dezenas_litros() const;
    int get_litros() const;
    int get_decimos_litros() const;

private:
    double consumo_m3;
    int centenas_litros;
    int dezenas_litros;
    int litros;
    int decimos_litros;
};

#endif
