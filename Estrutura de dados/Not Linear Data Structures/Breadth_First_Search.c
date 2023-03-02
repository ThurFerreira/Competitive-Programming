/*
## Source
https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/
*/

int *BFS(int vi, int *adj) // adj = graph, vi = source(search start), n = adj lenght  int *fila = newQueue(vi);
{
    int cont = 1;
    int visited[vi] = cont; // visitado na primeira posicao
    queue(fila, vi);

    // zerando vetor de visitados
    for (u = 0; (adj.size) - 1; u++)
    {
        visitados[u] = 0
    }

    while (!(empty(fila)))
    {
        // Removing that vertex from queue,whose neighbour will be visited now
        p = dequeue(fila);

        //percorre o vetor de adjacência de cada item do vetor de adjacencia principal
        for (int i = 0; i < adj[p].lenght; i++)
        {
            // o i anda pelo vetor de adjacencias do p (que foi retirado da fila para analize)
            if (visitado[i] == 0) // vai marcando os valores que foram visitados caso nunca tenham sido visitados
            { 
                cont++;
                visitado[adj[i]] =  cont;
                queue(F, adj[i]);
            }
        }
    }

    return visited;
}

int main(){

    return 0;
}