/*#include<iostream>
using namespace std;

char former[11];
char middle[11];
bool success = 1;

typedef struct Bintree_Node {
	char data;
	Bintree_Node* left;
	Bintree_Node* right;
};

Bintree_Node* Build(char* Formerdata, char* Middledata, int num);

int plieing(Bintree_Node* node, int num) {
	if (node == NULL) return num - 1;
	int temp1 = plieing(node->left, num + 1);
	int temp2 = plieing(node->right, num + 1);
	return temp1 > temp2 ? temp1 : temp2;
}

void printing(Bintree_Node* node) {
	if (node == NULL) return;
	cout << node->data;
	printing(node->left);
	printing(node->right);
}

int main()
{
	string s;
	while (cin >> s) {
		int nodeNum = s.length();
		for (int i = nodeNum - 1; i >= 0; i--) former[i] = s[nodeNum - i - 1];
		for (int i = 0; i < nodeNum; i++) cin >> middle[i];
		Bintree_Node* tree = NULL;
		tree = Build(former, middle, nodeNum);
		if (success) {
			cout << plieing(tree, 1) << endl;
			printing(tree);
			cout << endl;
		}
		success = 1;
	}
}

Bintree_Node* Build(char* Formerdata, char* Middledata, int num)
{
	if (Formerdata == NULL || Middledata == NULL || num <= 0)
		return NULL;

	Bintree_Node* root = new Bintree_Node;
	root->data = Formerdata[0];
	root->left = root->right = NULL;
	if (num == 1 && *Formerdata == *Middledata)
		return root;
	int left_num = 0;
	char* middle_root = Middledata;
	while (*middle_root != Formerdata[0] && middle_root <= (Middledata + num - 1))
	{
		middle_root++;
		left_num++;
	}
	if (*middle_root != Formerdata[0])
	{
		if (success) {
			cout << "INVALID" << endl;
			success = 0;
		}
		return NULL;
	}
	if (left_num > 0)
		root->left = Build(Formerdata + num - left_num, Middledata, left_num);
	if (num - left_num - 1 > 0)
		root->right = Build(Formerdata + 1, Middledata + left_num + 1, num - left_num - 1);
	return root;
}*/