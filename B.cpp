


#include <iostream>

using namespace std;

int main() {
  int N, i, j, k;
  cin >> N;

  for (i = 1; i <= N; i++) {

    for (j=i+1; j <= N; j++) {
        cout << " ";
    }

    for (k=1; k<=i; k++) {
        cout << "*";
    }

    cout << endl;
  }
}

/*
  for (int baris = 1; baris <= N; baris++) {
    for (int bintang = 1; bintang <= N; bintang++) {
      if (bintang < baris) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
}*/


/*int main () {
	int i,k,l,awal;
	
	scanf("%d",&awal);
	for(i=1;i<=awal;i++) {
		for(k=i+1;k<=awal;k++) {
			printf(" ");
		}
		for(l=1;l<=i;l++) {
			printf("*");
		}
		printf("\n");
	}
}*/
