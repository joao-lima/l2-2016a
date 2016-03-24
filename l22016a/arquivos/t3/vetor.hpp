// vetor.hpp
// TAD que implementa um vetor dinamico.
//
// The MIT License (MIT)
// 
// Copyright (c) 2016 João V. Lima, UFSM
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// inclui este arquivo apenas uma vez
#pragma once 

namespace tad {

template<typename T>
struct Vetor {
    T* dados;  // vetor de dados (ponteiros para tipo T)
    // adicione outros campos aqui

    // inicializa o vetor com tamanho n
    void cria( const int n ) {
        // TODO resto: alocação, etc
    }

    // retorna o tamanho do vetor
    int tamanho() const {
        // TODO
        return 0;
    }

    // Insere na posição i o valor  de tipo T.
    // Se a posição i estiver ocupado, avança uma posição
    // ou seja, empurra todos 1 posição.
    // Retorna true se inserido
    bool insere( const int i, T valor ){
        return false;
    }

    // Remove da posição i e retorna o valor.
    // Se tiver mais elementos depois, eles recuam
    // uma posição.
    T remove( const int i ){
        // TODO remove do vetor 
        return static_cast<T>(0);
    }

    // Retorna true se vetor vazio, senão false 
    bool vazio() {
        // TODO
        return true;
    }

    // Libera toda memória alocada pelo vetor.
    // Também zera contadores
    void destroi( void ){
        // TODO destroi vetor
    }
};

};

