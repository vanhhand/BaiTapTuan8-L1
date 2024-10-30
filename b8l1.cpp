#include <iostream>
using namespace std;
struct node {
	float heso;
	int somu;
	node* next; 
}; 
node* createnode(float hs, int sm) {
	if (hs == 0) return NULL; //kiem tra dieu kien he so bang 0
	node* newnode = new node; //cap phat dong
	newnode->heso = hs;
	newnode->somu = sm;
	newnode->next = NULL;
	return newnode; 
}
node* taodathuc(int n) { //n la so phan tu trong da thuc 
	node* head;
	do {
		float x; cout << "Nhap he so: "; cin >> x; //nhap phan tu dau tien
		int y; cout << "Nhap so mu: "; cin >> y; cout << "\n";
	 	head = createnode(x, y); 
	} while (head == NULL);
	node* current = head;
	for (int i = 1; i < n; i++)	{ //nhap cac phan tu tiep theo 
		float x; cout << "Nhap he so: "; cin >> x;
		int y; cout << "Nhap so mu: "; cin >> y; cout << "\n";
		node* temp = createnode(x, y);
		current->next = temp; 
	}
	return head;
}
void printlist(node* head) {
	node* current = head->next;
	cout << head->heso << "x^" << head->somu; //in ra phan tu dau tien
	while (current != NULL) { //in ra phan tu tiep theo 
		cout <<" + " << current->heso << "x^" << current->somu;
		current = current->next; 
	}
}
int main(){
	int n; cout << "Nhap so phan tu cua da thuc: "; cin >> n;
	if (n <= 0) { cout << "error"; return 0; }
	node* dathuc = taodathuc(n);
	printlist(dathuc); 
} 






