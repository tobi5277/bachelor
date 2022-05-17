#include "graph.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int graph_init(struct graph *graph, int num_nodes, int num_edges){

    // Assign memory to every index in graph_arr pointer
    graph->graph_arr = (int**)malloc(num_nodes * sizeof(int*));
    for (int i = 0; i < num_nodes; i++){
        graph->graph_arr[i] = (int*)malloc(num_nodes * sizeof(int*));
    }

    // Initialize every edge to some value (tentative)
    for (int i = 0; i < num_nodes; i++){
        for (int j = 0; j < num_nodes; i++){
            graph->graph_arr[i][j] = -1;
        }
    }
    // Set size indicators

    graph->num_edges = num_edges;
    graph->num_nodes = num_nodes;
    return 0;
}

int graph_destroy(struct graph *graph){
    for (int i = 0; i < graph->num_nodes; i++){
        free(graph->graph_arr[i]);
    }
    free(graph->graph_arr);
    free(graph);
    return 0;
}

int graph_from_array(struct graph *graph, int **graph_array, int num_nodes, int num_edges){
    graph_init(graph, num_nodes, num_edges);
    for (int i = 0; i < num_nodes; i++){
        for (int j = 0; j < num_nodes; i++){
            graph->graph_arr[i][j] = graph_array[i][j];
        }
    }
    return 0;
}



