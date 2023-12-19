#include <iostream>
/*
 * An image smoother is a filter of the size 3 x 3 that can be applied to each cell of an image by rounding down the average of the cell and the eight surrounding cells (i.e., the average of the nine cells in the blue smoother).
 * If one or more of the surrounding cells of a cell is not present, we do not consider it in the average (i.e., the average of the four cells in the red smoother).

 Given an m x n integer matrix img representing the grayscale of an image, return the image after applying the smoother on each cell of it.
 Input: img = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[0,0,0],[0,0,0],[0,0,0]]
Explanation:
For the points (0,0), (0,2), (2,0), (2,2): floor(3/4) = floor(0.75) = 0
For the points (0,1), (1,0), (1,2), (2,1): floor(5/6) = floor(0.83333333) = 0
For the point (1,1): floor(8/9) = floor(0.88888889) = 0
Example 2:Input: img = [[100,200,100],[200,50,200],[100,200,100]]
Output: [[137,141,137],[141,138,141],[137,141,137]]
Explanation:
For the points (0,0), (0,2), (2,0), (2,2): floor((100+200+200+50)/4) = floor(137.5) = 137
For the points (0,1), (1,0), (1,2), (2,1): floor((200+200+50+200+100+100)/6) = floor(141.666667) = 141
For the point (1,1): floor((50+200+200+200+200+100+100+100+100)/9) = floor(138.888889) = 138

 Constraints:

m == img.length
n == img[i].length
1 <= m, n <= 200
0 <= img[i][j] <= 255

 Runtime
Details
38ms
Beats 85.54%of users with C++
 Memory
Details
22.04MB
Beats 59.38%of users with C++
*/
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> result=img;
        int numFilas=img.size();
        int numColumnas=img[0].size();
        int promedio=0;
        int nElementos=0;
        int fila;
        int columna;
        for(int i=0;i<numFilas;i++){
            for(int j=0;j<numColumnas;j++){
                fila=i-1;
                for(int a=0; a<3;a++){
                    columna=j-1;
                    for(int b=0; b<3;b++){
                        if((fila>=0&&fila<numFilas)&&(columna>=0&&columna<numColumnas)){
                            promedio+= img[fila][columna];
                            nElementos++;
                        }
                        columna++;
                    }
                    fila++;
                }
                result[i][j]=(promedio/nElementos);
                promedio=0;
                nElementos=0;
            }
        }
        return result;
    }
};