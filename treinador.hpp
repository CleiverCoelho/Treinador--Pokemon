#ifndef TREINADOR_H
#define TREINADOR_H
#include "healthBall.hpp"
#include "evolutionBall.hpp"
#include "pokemon.hpp"
#include "pokebola.hpp"
#include "pokemonCapturado.hpp"

#include <iostream>
#include <vector>
#include <ctime>

class Treinador {
    private:
        std::string _nome;
        std::vector<EvolutionBall*> _evolutionBall;
        std::vector<HealthBall*> _healthBall;
    public:
        Treinador(std::string nome);
        Treinador();
        ~Treinador();
        
        HealthBall* selecionarHealthBall(int id);
        EvolutionBall* selecionarEvolBall(int id);

        // PROBLEMA DE SOBRECARGA!!!!!
        void adicionarPokebola(HealthBall* pokebola);
        void adicionarPokebola(EvolutionBall* pokebola);
        void listarPokemons(void);

};

#endif