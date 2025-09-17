#ifndef FLUXO_H
#define FLUXO_H

class Fluxo {
public:
    Fluxo(double vazao = 0.0, double pressao = 0.0, double volume = 0.0);

    double get_vazao() const;
    void set_vazao(double v);

    double get_pressao() const;
    void set_pressao(double p);

    double get_volume_total() const;
    void set_volume_total(double v);

    void incrementar_volume(double tempo_horas);

private:
    double vazao_;
    double pressao_;
    double volume_total_;
};

#endif
