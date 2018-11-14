# -*- coding: utf-8 -*-
#------------------------------------------------------------------
# LEIA E PREENCHA O CABEÇALHO 
# NÃO ALTERE OS NOMES DAS FUNÇÕES
# NÃO APAGUE OS DOCSTRINGS
# NÃO INCLUA NENHUM OUTRO import ...
#------------------------------------------------------------------

'''

    Nome: Zaqueu Cristiano Moreira
    NUSP: 10693246

    Ao preencher esse cabeçalho com o meu nome e o meu número USP,
    declaro que todas as partes originais desse exercício programa (EP)
    foram desenvolvidas e implementadas por mim e que portanto não 
    constituem desonestidade acadêmica ou plágio.
    Declaro também que sou responsável por todas as cópias desse
    programa e que não distribui ou facilitei a sua distribuição.
    Estou ciente que os casos de plágio e desonestidade acadêmica
    serão tratados segundo os critérios divulgados na página da 
    disciplina.
    Entendo que EPs sem assinatura devem receber nota zero e, ainda
    assim, poderão ser punidos por desonestidade acadêmica.

    Abaixo descreva qualquer ajuda que você recebeu para fazer este
    EP.  Inclua qualquer ajuda recebida por pessoas (inclusive
    monitores e colegas). Com exceção de material de MAC0122, caso
    você tenha utilizado alguma informação, trecho de código,...
    indique esse fato abaixo para que o seu programa não seja
    considerado plágio ou irregular.

    Exemplo:

        A monitora me explicou que eu devia utilizar a função int() quando
        fazemos leitura de números inteiros.

        A minha função quicksort() foi baseada na descrição encontrada na 
        página https://www.ime.usp.br/~pf/algoritmos/aulas/quick.html.

        Minha colega Maria me explicou o funcionamente da busca em largura.

    Descrição de ajuda ou indicação de fonte:

'''

from grafo import Grafo

# pode ser utilizado para clonar o grafo dado: grafo = copy.deepcopy(grafo_dado)
import copy 

class Caminhos_Minimos:
    '''
    Construa a sua classe abaixo.
    '''
    def __init__(self, grf, v):
        
        if v not in grf.grafo:
            print("Caminhos.__init__(): '%s' não é vertice do grafo"%(v))
            return
        
        graf = copy.deepcopy(grf)
        origem = v
        
        vert = graf.vertices()
        dist = {}
        ant = {}
        for elem in vert:
            dist[elem] = graf.V()
            ant[elem] = 0
#        dist = graf.V() * [graf.V()]
        dist[origem] = 0
        ant[origem] = None
        fila = [origem]
        
        while len(fila) > 0:
            o = fila.pop(0)
#            ad = graf.adjacentes(o)
            ad = graf.grafo[o]
            for elem in ad:
                if ant[elem] == 0:
                    fila.append(ad)
                d = dist[o] + 1
                if d < dist[elem]:
                    dist[elem] = d
                    ant[elem] = o

        self.graf = graf
        self.origem = origem
        self.dist = dist
        self.ant = ant
        self.vert = vert
        
    def __str__(self):
        
        t = "Caminhos Mínimos a partir de '%s'"%(self.origem)
        for v in self.vert:
            t += '%s: %d, %s \n'%(v, self.distancia(v), self.anterior(v))
            
        return t
        
    def distancia(self, v):
        
        return self.dist[v]
        
    def anterior(self, v):
        
        return self.ant[v]
        
    def caminho(self, v):
        
        atras = self.ant[v]
        rota = [atras]
        while atras != self.origem:
            atras = self.ant[atras]
            rota.append(0, atras)
            
        return rota
        