#include <libslic3r/TriangleMesh.hpp>
#include "libslic3r/MeshSplitImpl.hpp"

namespace Slic3r {
FaceNeighborIndex its_create_neighbors_index_1(const indexed_triangle_set &its);
std::vector<Vec3i> its_create_neighbors_index_2(const indexed_triangle_set &its);
std::vector<Vec3i> its_create_neighbors_index_3(const indexed_triangle_set &its);
FaceNeighborIndex its_create_neighbors_index_4(const indexed_triangle_set &its);
//FaceNeighborIndex its_create_neighbors_index_4(const indexed_triangle_set &its);
std::vector<Vec3crd> its_create_neighbors_index_5(const indexed_triangle_set &its);
std::vector<std::array<size_t, 3>> its_create_neighbors_index_6(const indexed_triangle_set &its);
std::vector<std::array<size_t, 3>> its_create_neighbors_index_7(const indexed_triangle_set &its);
FaceNeighborIndex its_create_neighbors_index_8(const indexed_triangle_set &its);
}
