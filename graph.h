#ifndef Graph_H_
#define Graph_H_

//
// Graph.h
//
//  Created on: 13/11/2021
//      Author: Angel Rico
//

#include <string>
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <algorithm>

using namespace std;

/**
 * Graph: clase de grafos
 * @file: Graph.h
 * @author: Angel Rico
 */
template <class T>
class Graph {
private:
    int edgesList;
    int edgesMat;
    int nodes;
    vector<T> *adjList;
    T *adjMatrix;

public:

    Graph();
    void setNumNodes(int);
    void addEdgeAdjList(T, T);
    string printAdjList(T);

};

template <class T>
Graph<T>::Graph() {
    edgesList = 0;
}

template <class T>
void Graph<T>::setNumNodes(int num){
    nodes = num;
    adjList = new vector<T>[nodes];
}

template <class T>
void Graph<T>::addEdgeAdjList(T u, T v) {
    adjList[u->value()].push_back(v);
    edgesList++;
}

template <class T>
string Graph<T>::printAdjList(T aux){
    stringstream ss;
	   	ss << "\n Recomendaciones para "
	         << aux->getName();
        for (int j = 0; j < adjList[aux->value()].size(); j ++){
			 ss  << "\n -> " << adjList[aux->value()][j]->getName();
		}
        ss<< "\n";
    return ss.str();
}

#endif