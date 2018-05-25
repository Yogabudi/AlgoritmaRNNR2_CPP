/*
 * File:   main.cpp
 * Author: Yoga Budi Yulianto
 *
 * Created on May 22, 2018, 5:42 PM
 */

#include <iostream>

using namespace std;

void angkaRandomNonRepetisi(int hasil[], int panjangArray) {
  srand(time(NULL));
  hasil[0] = (rand() % panjangArray);

  for(int i = 1; i < panjangArray; i++) {
    hasil[i] = -1;
  }

  for(int i = 1; i < panjangArray; i++) {
    bool valid = true;
    int r = 0;
    int angkaRandom = (rand() % panjangArray);

    while(hasil[r] != -1) {
      if(hasil[r] == angkaRandom) {
        valid = false;
        break;
      }
      r++;
    }

    if(valid) {
      hasil[i] = angkaRandom;
    }
    else {
      i--;
    }
  }
}

int main(int argc, char** argv) {
  int banyaknya = 5;

  if(argc > 1) {
    banyaknya = stoi(argv[1]);
  }

  int angkaRandom[banyaknya];
  int panjangArray = sizeof(angkaRandom) / sizeof(int);

  angkaRandomNonRepetisi(angkaRandom, panjangArray);

  for(int i = 0; i < panjangArray; i++) {
    cout << angkaRandom[i] << "\n";
  }

  return 0;
}
