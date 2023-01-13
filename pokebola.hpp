// TO DO ::::::::::::::::::

#ifndef POKEBOLA_H
#define POKEBOLA_H
#include <cstdlib>
#include <iostream>
#include <ctime>
#include "pokemonCapturado.hpp"
#include "pokemon.hpp"

class Pokebola{
    private:
        static int _count;
    protected:
        int _id;
        PokemonCapturado* _pokemon = new PokemonCapturado; // pokemon guardado na pokebola
    public:
        Pokebola(PokemonCapturado* pokemon);
        Pokebola();
        // destrutor que nao precisa de parametros pois só
        // vai desalocar a memoria heap do ponteiro pokemon
        ~Pokebola();

    public:

        int getCount(void);
        PokemonCapturado* getPokemonCapturado(void);
        void setPokemonCapturado(double);
        int getId(void);

        void guardarPokemon(void);
        Pokemon* liberarPokemon(void);
        virtual bool capturar(Pokemon &pok); // pokemon que eu desejo guardar na pokebola
};

#endif