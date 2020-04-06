/*
	Nama    : Muhamad Fahrul Azimi
	NPM     : 140810180027
	Kelas   : A
	Tanggal : 30 Maret 2020
	Program : List Adjacency
*/

/*
* C++ Program to Implement Adjacency List
*/
#include <iostream>
#include <cstdlib>
using namespace std;
/*
* Adjacency List Node
*/ 
struct AdjListNode{
    int dest;
    struct AdjListNode* next;
};

/*
* Adjacency List
*/  
struct AdjList{
    struct AdjListNode *head;
};

/*
* Class Graph
*/ 
class Graph{
    private:
        int V;
        struct AdjList* array;
    public:
        Graph(int V){
            this->V = V;
            array = new AdjList [V];
            for (int i = 1; i <= V; ++i)
                array[i].head = NULL;
        }
        /*
        * Creating New Adjacency List Node
        */ 
        AdjListNode* newAdjListNode(int dest){
            AdjListNode* newNode = new AdjListNode;
            newNode->dest = dest;
            newNode->next = NULL;
            return newNode;
        }
        /*
        * Adding Edge to Graph
        */ 
        void addEdge(int src, int dest){
            AdjListNode* newNode = newAdjListNode(dest);
            newNode->next = array[src].head;
            array[src].head = newNode;
            newNode = newAdjListNode(src);
            newNode->next = array[dest].head;
            array[dest].head = newNode;
        }
        /*
        * Print the graph
        */ 
        void printGraph(){
            int v;
            for (v = 1; v <= V; ++v){
                AdjListNode* pCrawl = array[v].head;
                cout << "\n Adjacency list of vertex " << v << "\n head ";
                while (pCrawl){
                    cout<<"-> "<<pCrawl->dest;
                    pCrawl = pCrawl->next;
                }
                cout<<endl;
            }
        }
};


int main(){
    int pilihan,a,b,n;
    cout << "Banyak node : "; cin >> n;
    Graph gh(n);
    for(; ;){
        cout << "\nMenu\n";
        cout << "1. Tambah edge\n";
        cout << "2. Print Edge\n";
        cout << "3. Exit\n\n";
        cout << "Pilihan : "; cin >> pilihan;
        
        switch (pilihan){
            case 1:
                cout << "\nedge(a,b)\n";
            	cout << "Input a : "; cin >> a;
                cout << "Input b : "; cin >> b;
                gh.addEdge(a,b);
                continue;
            case 2:
                gh.printGraph();
                continue;
            case 3:
                return 0;
                break;
            default:
                continue;
        }
    }

    return 0;
}
