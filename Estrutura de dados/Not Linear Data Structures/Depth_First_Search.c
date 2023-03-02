int cont = 0;

int *DFS(int vi, int n, int *adj){
    
    int visitados[n];
    
    for (int i = 0; i < n; i++)
    {
        adj[i] = 0;
    }

    depth(vi, adj, visitados);

    return adj;
}

int depth(int v, int *adj, int *visitado){
    cont++;
    visitado[v] = cont;

//enquanto houver nao visitados em Adj[v] faça (enquanto houver itens adjacentes ao nó V (atual))
    for(int i = 1; i < adj.size; i++){
        if(visitado[i] == 0){
            depth(adj[i], adj, visitado);
        }
    }
}


int main(){

    return 0;
}