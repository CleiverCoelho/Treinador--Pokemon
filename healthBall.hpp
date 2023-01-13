#ifndef HEALTHBALL_H
#define HEALTHBALL_H

// TO DO :::::::::::::::::::::::::::::

#include <ctime>
#include <iostream>
#include "pokebola.hpp"

// como cosntruir uma classe filha sem referencias da classe pai?
// ou simplesmente nao construir? ::::
class HealthBall : public Pokebola {
    private:
        time_t _ultimoUso; // usar time bib ctime
        double _intervalo; // usar difftime
        bool _recuperado;

    public:

        HealthBall(double intervalo);
        HealthBall();
        
        bool recuperarPokemon(void);
        
        time_t getUltimoUso(void);
        void setUltimoUso(time_t ultimoUso);

        double getIntervalo(void);
};

#endif