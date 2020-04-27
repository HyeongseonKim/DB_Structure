#include <stdio.h>
#include "ALGraph.h"

int main(void)
{
  ALGraph graph;  // 그래프의 생성
  GraphInit(&graph, 5); // 그래프의 초기화를

  AddEdge(&graph, A, B);  // 정점 A와 B를 연결
  AddEdge(&graph, A, D);  // 정점 A와 D를 연결
  AddEdge(&graph, B, C);  // 정점 B와 C를 연결
  AddEdge(&graph, C, D);  // 정점 C와 D를 연결
  AddEdge(&graph, D, E);  // 정점 D와 E를 연결
  AddEdge(&graph, E, A);  // 정점 E와 A를 연결

  ShowGraphEdgeInfo(&graph);
  GraphDestroy(&graph);
  return 0;
}
