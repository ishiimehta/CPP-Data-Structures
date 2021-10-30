/*
 * Floyd Warshall.cpp
 *
 *  Created on: 15-Oct-2021
 *      Author: mehta
 */

// Implementation of Floyd Warshall Algorithm.

#include <bits/stdc++.h>
using namespace std;

#define INF 99999
#define V 4

void floydwarshall(int graph[][V]){

    int dis[V][V],i,j,k;

    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            dis[i][j]=graph[i][j];
        }
    }

    for(k=0;k<V;k++){
        for(i=0;i<V;i++){
            for(j=0;j<V;j++){
                if(dis[i][j]> dis[i][k]+dis[k][j])
                    dis[i][j]=dis[i][k]+dis[k][j];
            }
        }
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if(dis[i][j]==INF)
                cout<<"INF"<<" ";
            else
                cout << dis[i][j] << " ";
        }
        cout<<endl;
    }

}

int main() {

    int graph[V][V]= {{0, 12, 3, 9},
                      {INF, 0, 8, 5},
                      {INF, INF, 0, 7},
                      {INF, INF, INF, 0}};
    floydwarshall(graph);
}
