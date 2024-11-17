// You may include library here

int depth(node *n)
{
  // Write Code Here
  if(n == nullptr) return -1;
  return std::max(depth(n->left_child)+1, depth(n->right_sibling));
}