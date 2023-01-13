// TO DO ::::::::::::::::::::::::::

#include "pokebola.hpp"
#include "pokemonCapturado.hpp"
#include "pokemon.hpp"

Pokebola::Pokebola(PokemonCapturado* pokemon){
    _count++;
    _id = _count;
    _pokemon = pokemon;
}

Pokebola::Pokebola(){
    _count++;
    _pokemon = nullptr;   
    _id = _count;
}

// incializando static atributte
int Pokebola::_count = -1;

Pokebola::~Pokebola(){
    delete _pokemon;
}

void Pokebola::guardarPokemon(){
    if(_pokemon != nullptr){
        _pokemon->setDormindo();
    }
}

Pokemon* Pokebola::liberarPokemon(){
    if(_pokemon == nullptr){
        return nullptr;
    }else{
        _pokemon->setAcordado();
        return _pokemon;
    }
}

// ERRADO -> CORRIGIR AINDA NAO ESTA BATENDO COM O DO MOODLES
bool Pokebola::capturar(Pokemon &pokemon){
    
    double random_number = ((double) rand() / RAND_MAX);

    if(random_number > 0.5){
        PokemonCapturado* pok = new PokemonCapturado(pokemon);
        _pokemon = pok;
        return true;
    }else{
        return false;
    }

}

int Pokebola::getCount(){return _count;}

PokemonCapturado* Pokebola::getPokemonCapturado(){return _pokemon;}
void Pokebola::setPokemonCapturado(double taxaP){
    _pokemon->evoluir(taxaP);
}


int Pokebola::getId(){return _id;}

