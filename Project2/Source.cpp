//BinarySearch Tree - İkili axtarış ağacı, nömrələrin çeşidlənmiş
//siyahısını tez saxlamağa imkan verən məlumat strukturudur.

//1. Hər ağac düyününün ən çoxu iki uşağı olduğu üçün ona ikili ağac deyilir.
//2. Bir sayının O(log(n))zaman içinde varlığını aramak için kullanılabileceği için arama ağacı olarak adlandırılır.

//Axtarma Algoritması:


//If root == NULL
//return NULL;
//If number == root->data
//return root->data;
//If number < root->data
//    return search(root->left)
//    If number > root->data
//    return search(root->right)


//Əlavə etmə algoritması:

//If node == NULL
//return createNode(data)
//if (data < node->data)
//    node->left = insert(node->left, data);
//else if (data > node->data)
//node->right = insert(node->right, data);
//return node;