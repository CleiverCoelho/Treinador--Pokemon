#include "treinador.hpp"
#include "healthBall.hpp"
#include "evolutionBall.hpp"
#include "pokemonCapturado.hpp"
#include "pokemon.hpp"

// ERRO DE SOBRECARGA NAO RECONHECE A CALSSE TREINADOR??

Treinador::Treinador(std::string nome) : _nome(nome){}

Treinador::Treinador(){}

Treinador::~Treinador(){

    // COMO FUNCIONA ESSE DESTRUTOR ??
    /*
    int lenEvol = _evolutionBall.size();
    int lenHeal = _healthBall.size();

    for(int i = 0; i <= lenHeal; i++){
        delete _healthBall[i];
    }
    for(int j = 0; j <= lenEvol; j++){
        delete _evolutionBall[j];
    }*/
}

HealthBall* Treinador::selecionarHealthBall(int id){
    int lenBall = _healthBall.size() + 1;
    for(int i = 0; i <= lenBall; i++){
        if(_healthBall[i]->getId() == id){
            return _healthBall[i];
        }
    }
    return nullptr;
}

EvolutionBall* Treinador::selecionarEvolBall(int id){
    int lenBall = _evolutionBall.size() + 1;
    for(int j = 0; j <= lenBall; j++){
        if(_evolutionBall[j]->getId() == id){
            return _evolutionBall[j];
        }
    }
    return nullptr;
}

void Treinador::adicionarPokebola(HealthBall* pokebola){

    _healthBall.push_back(pokebola);
}

void Treinador::adicionarPokebola(EvolutionBall* pokebola){

    _evolutionBall.push_back(pokebola);
}

void Treinador::listarPokemons(){
    // PROBLEMA PRA ACESSAR METODOS PROTEGIDOS
    // OU PRIVADO, CRIAR METODOS PRA ACESSAR E ENCONTRAR
    // POR ID

    // RESOLVIDO CHECK - OK

    std::cout << "Treinador: " << _nome << std::endl;
    int lenEvol = _evolutionBall.size();
    int lenHeal = _healthBall.size();
    if(lenHeal == 0 && lenEvol == 0){
        std::cout << "O treinador não possui pokebolas";
        return;
    }else{
        // verificando pokebolas dentro de _healthBall 
        for(int i = 0; i < lenHeal; i++){
            std::cout << "HealthBall ID: " << _healthBall[i]->getId() << std::endl;
            if(_healthBall[i]->getPokemonCapturado() == nullptr){
                std::cout << "A pokebola não possui um pokemon" << std::endl;
            }else{
                _healthBall[i]->getPokemonCapturado()->info();
            }        
        }
        // verificando pokebolas em _evolutionBall
        // nao estou conseguindo IMPRIMIR EVOLUTION BALL
        // mas consigo acessar o ID
        for(int j = 0; j < lenEvol; j++){
            std::cout << "EvolutionBall ID: " << _evolutionBall[j]->getId() << std::endl;
            if(_evolutionBall[j]->getPokemonCapturado() == nullptr){
                std::cout << "A pokebola não possui um pokemon" << std::endl;
            }else{
                _evolutionBall[j]->getPokemonCapturado()->info();             
            }
        }
    }
}
