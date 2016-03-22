
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void quicksort(int *input, int left, int right) {
      if(left >= right){return;}
      int i = left;
      int j = right;
      int theone;
      int tmp;
      theone = left;
      //cout <<"pivot "<<input[theone]<<endl;
      /*for(int hebe = 0; hebe < right; hebe++){
        cout << input[hebe] << " ";
        }
        cout << endl;*/

      while (i <= j) {
            while (input[i] <= input[theone]){i++;}
            while (input[j] > input[theone]){j--;}
            if (i <= j) {
                  tmp = input[i];
                  input[i] = input[j];
                  input[j] = tmp;
                  i++;
                  j--;
            }
      };

    tmp = input[j];
    input[j] = input[theone];
    input[theone] = tmp;

    /*for(int hebe = 0; hebe < right; hebe++){
        cout << input[hebe] << " ";
        }
    //cout << "sorted"<< " i:" <<i<<" j:"<<j << endl;*/

      if (left < j){quicksort(input, left, j-1);}
      if (i < right){quicksort(input, j+1, right);}
      return;
}

int main(){

int input[10001];
int in;
int counter = 0;

    while(cin >> in){
        input[counter] = in;
        counter++;
    }

    //cout << counter << endl;

    quicksort(input, 0, counter-1);
    for(int hebe = 0; hebe < counter; hebe++){
        cout << input[hebe] << " ";
    }

return 0;
}
