//
// Created by nadya on 27.10.17.
//

#ifndef THREE_COLORING_CSP_H
#define THREE_COLORING_CSP_H

#include <vector>
enum color_type_csp {red, green, blue, black};


class csp
{
  class node_csp
  {
    bool avalable[4];

    class node_pair
    {
      node_csp* parent;
      color_type_csp color;
      std::vector<node_pair*> neighbors;

      node_pair(node_csp par, color_type_csp col, std::vector<node_pair*> neigh)
              : parent = par, color = col, neightbors = neigh;

      void add_neightbor(node_pair*);

      void add_neighbor(node_csp, color_type_csp);

    };

    node_pair little_nodes[4];
  };

  std::vector<node_csp> graph_csp;

  bool lemma1();
};


#endif //THREE_COLORING_CSP_H
