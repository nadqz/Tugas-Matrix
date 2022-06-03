#include <iostream>
#include <conio.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main() {
    // Game pokemon
    /*
    1 
    2
    3
    4
    5
    6
    7
    */
    
    int panjangPeta = 20; // x
    int lebarPeta = 16; // y
    
    int posisiKarakterY = 15;
    int posisiKarakterX = 4;
    
    cout << "Karakter ada di y:" << posisiKarakterY << ", x:" << posisiKarakterX << "\n";
    
    int peta[lebarPeta][panjangPeta] = {
    	{8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {8,8,8,8,8,8,1,1,1,1,1,1,1,5,5,1,1,1,1,1},
        {8,8,8,1,1,1,1,1,1,1,1,1,1,5,5,1,1,1,1,1},
        {8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,8,8,8,8,8,8,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,8,8,8,8,8,1,1,1,1,1,1,4,4,4,4,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,1,1,1},
        {1,1,1,5,5,1,1,1,1,1,4,4,4,4,4,4,4,1,1,1},
        {1,1,1,5,5,1,1,1,4,4,4,4,4,4,4,4,6,6,6,6},
        {1,1,5,5,1,1,1,1,4,4,4,4,4,4,4,4,4,1,1,1},
        {1,1,5,5,1,1,1,1,4,4,4,1,1,4,4,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,4,4,4,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,4,4,4,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1},
	};
	
	
	int arrowKey = 0;
	int coordinate = peta[posisiKarakterY][posisiKarakterX];
    
    /*
    #define KEY_UP 72
    #define KEY_DOWN 80
    #define KEY_LEFT 75
    #define KEY_RIGHT 77
    */
    
    while(1) {
        // Input Keyboard
        cout << "Masukan arrow key ";
        arrowKey = getch();
        cout << "Arrow key yang dimasukan " << arrowKey << "\n";
		
		for (int i = 0; i <lebarPeta;i++) {
			for (int j=0; j<panjangPeta;j++) {
				if (posisiKarakterX==j&&posisiKarakterY==i&& coordinate < 4) {
					cout<<"&";
				} else if (peta[i][j]==1) {
					cout<<"_";
				} else if (peta[i][j]==2) {
					cout << "m";
				} else if (peta[i][j]==3) {
					cout << "~";
				} else if (peta[i][j]==4) {
					cout << "G";
				} else if (peta[i][j]==5) {
					cout << "|";
				} else if (peta[i][j]==6) {
					cout << "o";
				} else if (peta[i][j]==7) {
					cout << "^";
				} else if (peta[i][j]==8) {
					cout << "#";
				} else {
					// nothing to do
				}
			}
			cout << "\n";
			
		}
        
        // Aturan menggerakkan karakter ke atas
        if(arrowKey == KEY_UP && peta[posisiKarakterY-1][posisiKarakterX] < 4) {
            posisiKarakterY -=1;
            posisiKarakterY < 0 ? posisiKarakterY = 0 : posisiKarakterY;
        } else if(arrowKey == KEY_DOWN && peta[posisiKarakterY+1][posisiKarakterX] < 4) {
            posisiKarakterY +=1;
            posisiKarakterY > 15 ? posisiKarakterY = 15 : posisiKarakterY;
        } else if(arrowKey == KEY_LEFT && peta[posisiKarakterY][posisiKarakterX-1] < 4) {
            posisiKarakterX-=1;
            posisiKarakterX < 0 ? posisiKarakterX = 0 : posisiKarakterX;
        } else if (arrowKey == KEY_RIGHT && peta[posisiKarakterY][posisiKarakterX+1] < 4) {
            posisiKarakterX+=1;
            posisiKarakterX > 19 ? posisiKarakterX = 19 : posisiKarakterX;
        } else {
        	// nothing to do
		}
        
    }
     
    
    return 0;
}