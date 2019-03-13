#include <iostream>
#include <vector>

using namespace std;

int squareOf2Ys(vector<int> vec) {
   if(vec.size() != 6) {
       cout << "Unexpected input" << endl;
       return -1;
   }

   int width = 0;
   int smallWidth = 0;
   int height = 0;
   int smallHeight = 0;

   for (int i = 0; i < 6; i++) {
       if (i % 2) {
           width = (width < vec[i]) ? vec[i] : width;
       } else {
           height = (height < vec[i]) ? vec[i] : height;
       }
   }

   for (int i = 0; i < 6; i++) {
       if (i % 2) {
           if (height == vec[(i + 5) % 6] + vec[(i + 1) % 6]) {
               smallWidth = vec[i];
           }
       } else {
           if (width == vec[(i + 5) % 6] + vec[(i + 1) % 6]) {
               smallHeight = vec[i];
           }
       }
   }
   return width * height - smallWidth * smallHeight;
}

int main() {
    int numPerSquare;
    int square;
    cin >> numPerSquare;

    vector<int> vec;
    for (int i = 0; i < 6; i++) {
        int direct, length;
        cin >> direct >> length;
        vec.emplace_back(length);
    }
    square = squareOf2Ys(vec);
    square *= numPerSquare;
    cout << square << endl;

    return 0;
}