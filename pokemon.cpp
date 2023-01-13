// DONE :::::::::::::::::::;

#include "pokemon.hpp"

Pokemon::Pokemon(std::string nome, std::string tipo,
    std::string proxEvolucao, double forcaAtaque, 
    double forcaDefesa, double saude){
        _nome = nome;
        _tipo = tipo;
        _proxEvolucao = proxEvolucao;
        _forcaAtaque = forcaAtaque;
        _forcaDefesa = forcaDefesa;
        _saude = saude;
    }

Pokemon::Pokemon(){}

std::string Pokemon::getNome(){return _nome;}
void Pokemon::setNome(std::string nomeEvolucao){
    _nome = nomeEvolucao;
    setProxEvolucao();
    return;
}

std::string Pokemon::getTipo(){return _tipo;}

std::string Pokemon::getProxEvolucao(){return _proxEvolucao;}
void Pokemon::setProxEvolucao(){
    _proxEvolucao = "";
    return;    
}

void Pokemon::maxSaude(){
    _saude = 100;
    return;
}
double Pokemon::getSaude(){return _saude;}

void Pokemon::info(){
    std::cout << "Pokemon: " << _nome << ", ";
    std::cout << _tipo << ", " << _forcaAtaque << ", ";
    std::cout << _forcaDefesa << ", " << _saude << std::endl;;
    return;
}

double Pokemon::getForcaAtaque(){return _forcaAtaque;}
void Pokemon::setForcaAtaque(double taxaPoder){
    double fator = taxaPoder;
    _forcaAtaque = _forcaAtaque + _forcaAtaque*fator;
    return;
}

double Pokemon::getForcaDefesa(){return _forcaDefesa;}
void Pokemon::setForcaDefesa(double taxaPoder){
    double fator = taxaPoder;
    _forcaDefesa = _forcaDefesa + _forcaDefesa*fator;
    return;
}

