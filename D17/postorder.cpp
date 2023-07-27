// Note i am submitting only the solution which i have submit on coding paltform you have to apply your own main function.
//BY SACHIN KUMAR GUPTA

struct node {
  int data;
  struct node * left, * right;
};

void postOrderTrav(node * curr, vector < int > & postOrder) {
  if (curr == NULL)
    return;

  postOrderTrav(curr -> left, postOrder);
  postOrderTrav(curr -> right, postOrder);
  postOrder.push_back(curr -> data);
}

struct node * newNode(int data) {
  struct node * node = (struct node * ) malloc(sizeof(struct node));
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}