#include <bits/stdc++.h> 
using namespace std; 

/* Fungsi utama yang menemukan jalur terpendek 
   dari sumber ke semua simpul lainnya menggunakan 
   algoritma Bellman-Ford. Fungsinya juga mendeteksi 
   siklus berat negatif Grafik baris [i] mewakili 
   ujung ke-i dengan tiga nilai u, v dan w. */
   
/*Anggota Kelompok :	Muhammad Luthfiansyah		140810170023
						Karimah Azzuhdu T			140810170027
						Muhammad Afif				140810170045
*/
   
void BellmanFord(int graph[][3], int V, int E, 
				int src) 
{ 
// Inisialisasi jarak semua simpul sebagai 0. 
//dis = distance
	int dis[V]; 
	for (int i = 0; i < V; i++) 
		dis[i] = INT_MAX; 

	// inisialisasi jarak sumber sebagai 0
	dis[src] = 0; 

	// Relaksasi semua ujung | V | - 1 kali. Sederhana
	// jalur terpendek dari sumber ke yang lain
	// vertex dapat memiliki paling banyak | V | - 1 ujung	
	for (int i = 0; i < V - 1; i++) { 

		for (int j = 0; j < E; j++) { 
			if (dis[graph[j][0]] + graph[j][2] < dis[graph[j][1]]) 
				dis[graph[j][1]] = dis[graph[j][0]] + graph[j][2]; 
		} 
	} 

	// periksa siklus bobot negatif.
	/* Langkah di atas menjamin jalur terpendek 
	jika grafik tidak mengandung siklus berat negatif. 
	Jika mendapat jalur yang lebih pendek, maka terbentuk siklus. */
	for (int i = 0; i < E; i++) { 
		int x = graph[i][0]; 
		int y = graph[i][1]; 
		int weight = graph[i][2]; 
		if (dis[x] != INT_MAX && 
				dis[x] + weight < dis[y]) 
			cout << "Graph contains negative"
					" weight cycle"
				<< endl; 
	} 

	cout << " Algoritma Bellman - Ford " << endl;
	cout << "==========================" << endl;
	cout << "Jarak Simpul dari Sumber" << endl; 
	for (int i = 0; i < V; i++) 
		cout << i << "\t\t" << dis[i] << endl; 
} 

	// Program driver untuk menguji fungsi-fungsi di atas
int main() 
{ 
	int V = 5; // Jumlah simpul dalam graph
	int E = 8; // Jumlah sisi dalam graph

	// Setiap tepi memiliki tiga nilai (u, v, w) di mana
	// ujungnya dari sudut u ke v. Dan berat
	// dari tepi adalah w.
	int graph[][3] = { 
						{ 0, 1, -1 }, { 1, 3, 2 }, 
						{ 3, 4, -3 }, { 4, 2, 5 }, 
						{ 2, 0, 4 }, { 1, 2, 3 }, 
						{ 1, 4, 1 }, { 4, 1, 2 } 
					}; 

	BellmanFord(graph, V, E, 0); 
	return 0; 
} 

