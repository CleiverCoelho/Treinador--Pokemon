// DONE ::::::::::::::::::::::

#ifndef EVOLUTIONBALL_H
#define EVOLUTIONBALL_H

#include "pokebola.hpp"
#include <iostream>

class EvolutionBall : public Pokebola {
    private:
        double _taxaPoder;
        bool _habilidadeUsada;
    
    public:
        EvolutionBall(double taxaPoder);
        EvolutionBall();
        bool evoluirPokemon(void);
};

#endif