//
// Created by nadya on 27.10.17.
//

#include "graph.h"

graph::node_graph::node_graph(int n);
       : avalable(true), number(n), neighborhood(0), have_fixed_color(false), fixed_color(red)
{
  for (int i = 0; i < 3; ++i)
    avalable_color[i] = true;
}

