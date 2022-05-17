#ifndef GRAPH_H
#define GRAPH_H

/* 
A graph data structure represented by a 2D array, where index [i][j] represents
the edge between nodes with ID i and j. 
*/

struct graph{
    int num_nodes, num_edges;
    int **graph_arr;
};


/* Initialize graph with a specified amount of nodes and edges */
int graph_init(struct graph *graph, int num_nodes, int num_edges);


/* Destroy the graph. */ 
int graph_destroy(struct graph *graph);


/* Set up graph from already specified array of nodes */
int graph_from_array(struct graph *graph, int **graph_array, int num_nodes, int num_edges);

#endif