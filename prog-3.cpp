
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int compare(int *input, int p1, int p2, int p3){
    int theone;
    if(input[p1] > input[p2]){
            if(input[p2] > input[p3]){
                theone = p2;
            }
            if(input[p2] <= input[p3]){
                theone = p3;
            }
        }
         if(input[p1] <= input[p2]){
            if(input[p1] > input[p3]){
                theone = p1;
            }
            if(input[p1] <= input[p3]){
                theone = p3;
            }
        }
return theone;
}

void quicksort(int *input, int left, int right) {
      if(left >= right){return;}
      int p9 = left;
      int j = right;
      int theone;
      int tmp;

      if(right - left>=9){
        int p1 = rand() % (right-left+1) + left;
        int p2 = rand() % (right-left+1) + left;
        while(p1 == p2){
            p2 = rand() % (right-left+1) + left;
        }
        int p3 = rand() % (right-left+1) + left;
        while(p1 == p3 || p2 == p3){
            p3 = rand() % (right-left+1) + left;
        }
        int p4 = rand() % (right-left+1) + left;
        while(p1 == p4 || p2 == p4 || p3 == p4){
            p4 = rand() % (right-left+1) + left;
        }
        int p5 = rand() % (right-left+1) + left;
        while(p1 == p5 || p2 == p5 || p3 == p5 || p4 == p5){
            p5 = rand() % (right-left+1) + left;
        }
        int p6 = rand() % (right-left+1) + left;
         while(p1 == p6 || p2 == p6 || p3 == p6 || p4 == p6 || p5 == p6){
            p6 = rand() % (right-left+1) + left;
        }
        int p7 = rand() % (right-left+1) + left;
         while(p1 == p7 || p2 == p7 || p3 == p7 || p4 == p7 || p5 == p7 || p6 == p7){
            p7 = rand() % (right-left+1) + left;
        }
        int p8 = rand() % (right-left+1) + left;
         while(p1 == p8 || p2 == p8 || p3 == p8 || p4 == p8 || p5 == p8 || p6 == p8 || p7 == p8){
            p8 = rand() % (right-left+1) + left;
        }
        int p9 = rand() % (right-left+1) + left;
         while(p1 == p9 || p2 == p9 || p3 == p9 || p4 == p9 || p5 == p9 || p6 == p9 || p7 == p9 || p8 == p9){
            p9 = rand() % (right-left+1) + left;
        }
        /*cout << p1 << " / ";
        cout << p2 << " / ";
        cout << p3 << " /";
        cout << p4 << " /";
        cout << p5 << " /";
        cout << p6 << " /";
        cout << p7 << " /";
        cout << p8 << " /";
        cout << p9 << " /";
        cout << endl;*/
        int ans1 = compare(input, p1, p2, p3);
        int ans2 = compare(input, p4, p5, p6);
        int ans3 = compare(input, p7, p8, p9);
        theone = compare(input, ans1, ans2, ans3);


      }

      if(right - left>=2 && right - left < 9){
        int p1 = rand() % (right-left+1) + left;
        int p2 = rand() % (right-left+1) + left;
        while(p1 == p2){
            p2 = rand() % (right-left+1) + left;
        }
        int p3 = rand() % (right-left+1) + left;
        while(p1 == p3 || p2 == p3){
            p3 = rand() % (right-left+1) + left;
        }
        theone = compare(input, p1, p2, p3);
        /*cout << p1 << " / ";
        cout << p2 << " / ";
        cout << p3 << " /";
        cout << endl;*/
      }

      if(right - left<2){
        theone = left;
      }
        tmp = input[left];
        input[left] = input[theone];
        input[theone] = tmp;
        theone = left;
      /*cout <<"pivot "<<input[theone]<<endl;
      for(int hebe = 0; hebe < right; hebe++){
        cout << input[hebe] << " ";
        }
        cout << endl;*/

      while (p9 <= j) {
            while (input[p9] <= input[theone]){p9++;}
            while (input[j] > input[theone]){j--;}
            if (p9 <= j) {
                  tmp = input[p9];
                  input[p9] = input[j];
                  input[j] = tmp;
                  p9++;
                  j--;
            }
      };

    tmp = input[j];
    input[j] = input[theone];
    input[theone] = tmp;

    /*for(int hebe = 0; hebe < right; hebe++){
        cout << input[hebe] << " ";
        }
    cout << "sorted"<< " p9:" <<p9<<" j:"<<j << endl;*/

      if (left < j){quicksort(input, left, j-1);}
      if (p9 < right){quicksort(input, j+1, right);}
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
