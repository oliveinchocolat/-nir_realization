//
// Created by nadya on 27.10.17.
//

#ifndef THREE_COLORING_GRAPH_H
#define THREE_COLORING_GRAPH_H

#include <vector>
#include "extra_type.h"

using namespace std;

class graph
{
  class node_graph
  {
    bool avalable;
    int number;
    vector<node_graph*> neighborhood;
    bool have_fixed_color;
    color_type fixed_color;
    bool avalable_color[3];

    node_graph(int);
  };

  vector<node_graph> list;

  graph();

  void read();

  bool is_bipartite();

  void print();

  bool is_colorable();

};


#endif //THREE_COLORING_GRAPH_H
