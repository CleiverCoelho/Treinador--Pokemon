// TO DO ::::::::::::::::::::::::::::::


#include "healthBall.hpp"
#include "pokebola.hpp"

HealthBall::HealthBall(double intervalo) : Pokebola(){
    _intervalo = intervalo;
    time(&_ultimoUso);
    _recuperado = false;
}
HealthBall::HealthBall(){
    _ultimoUso = time(nullptr);
    _recuperado = false;
}

bool HealthBall::recuperarPokemon(){
    // acessando _pokemon herdado da classe Pokebola
    // e seu atributo _pok que tem o metodo maxSaude()
    time_t tempoAtual;
    time(&tempoAtual);
    time_t tempoDiff;

    tempoDiff = difftime(tempoAtual, _ultimoUso);

    if(getPokemonCapturado() == nullptr){
        return false;
    }else{
        if(tempoDiff > _intervalo || _recuperado == false){
            _ultimoUso = time(nullptr);
            getPokemonCapturado()->maxSaude();
            _recuperado = true;
            return true;
        }else{
            return false;
        }
    }
    

}