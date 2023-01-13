// DOONE :::::::::::::::::::

#ifndef POKEMONCAPTURADO_H
#define POKEMONCAPTURADO_H

#include "pokemon.hpp"
#include <iostream>

class PokemonCapturado : public Pokemon {
    private:
        bool _evoluido;
        bool _dormindo;
        Pokemon _pok;

        // inicializar a classe pai apenas no cpp
        // nao esquecer das chaves após construtor do cpp -> {}
    public:
        
        PokemonCapturado(Pokemon &pok);
        PokemonCapturado();
        void evoluir(double);

        Pokemon getPok(void);

        bool getDormindo(void);
        void setDormindo(void);
        void setAcordado(void);

        bool getEvoluido(void);

};

#endif