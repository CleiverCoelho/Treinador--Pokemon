// DONE ::::::::::::::::::::::::::

#include "evolutionBall.hpp"

EvolutionBall::EvolutionBall(double taxaPoder) : Pokebola(){
    _taxaPoder = taxaPoder;
    _habilidadeUsada = false;
}
EvolutionBall::EvolutionBall(){}

// como avalar se a pokebola temm um pokemon guardado? R:: inicializei
// por padrao pokemon como nullptr CERTO - OK
bool EvolutionBall::evoluirPokemon(){

    if(getPokemonCapturado() == nullptr){
        return false;
    }else{
        if(_habilidadeUsada == false){
            setPokemonCapturado(_taxaPoder);
            _habilidadeUsada = true;
            return true;
        }else{
            return false;
        }
    }
}