// DONE :::::::::::::::::::::::::

#ifndef POKEMON_H
#define POKEMON_H
#include <string>
#include <iostream>
#include <ctime>

class Pokemon {

    protected:
        std::string _nome;
        std::string _tipo;
        std::string _proxEvolucao;
        double _forcaAtaque;
        double _forcaDefesa;
        double _saude;

    public:
        Pokemon(std::string, std::string, 
            std::string, double, double, double);
        Pokemon(std::string, std::string, std::string);
        Pokemon();

        std::string getNome(void);
        void setNome(std::string nomeEvolucao);

        std::string getTipo(void);

        std::string getProxEvolucao(void);
        void setProxEvolucao(void);
        
        double getForcaAtaque(void);
        void setForcaAtaque(double taxaPoder);

        double getForcaDefesa(void);
        void setForcaDefesa(double taxaPoder);
        
        double getSaude(void);
        void maxSaude(void);
        void info(void);
};

#endif