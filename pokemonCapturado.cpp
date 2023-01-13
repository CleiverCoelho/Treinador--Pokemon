// DONE :::::::::::::::::::

#include "pokebola.hpp"
#include "pokemon.hpp"
#include "pokemonCapturado.hpp"


// duvida sobre essa inicializacao
PokemonCapturado::PokemonCapturado(Pokemon& pok) : Pokemon(pok.getNome(), pok.getTipo(), 
     pok.getProxEvolucao(), pok.getForcaAtaque(), pok.getForcaDefesa(), pok.getSaude()){
        // std::cout << "POKEMON NAME::; " << pok.getNome() << std::endl;
        _evoluido = false;
        _dormindo = true;
    }
// talvez tenha que inicializar algo aqui
PokemonCapturado::PokemonCapturado(){}

void PokemonCapturado::evoluir(double taxaP){
    _evoluido = true;
    setNome(getProxEvolucao());
    setForcaAtaque(taxaP);
    setForcaDefesa(taxaP);
}

bool PokemonCapturado::getDormindo(){return _dormindo;}
void PokemonCapturado::setDormindo(){_dormindo = true;}
void PokemonCapturado::setAcordado(){_dormindo = false;}

bool PokemonCapturado::getEvoluido(){return _evoluido;}

