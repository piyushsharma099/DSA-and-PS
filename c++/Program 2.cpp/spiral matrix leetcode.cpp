<<<<<<< HEAD
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> a;
//         int r = matrix.size();
//         int c = matrix[0].size();
        
//         int count = 0;
//         int t = r*c;

//         int sr = 0;
//         int sc = 0;
//         int er = r-1;
//         int ec = c-1;
        
        
//         while(count < t) {
//             for(int i = sc; count< t && i<=ec; i++) {
//                 a.push_back(matrix[sr][i]);
//                 count++;
//             }
//             sr++;
//             for(int i = sr; count< t && i<=er; i++) {
//                 a.push_back(matrix[i][ec]);
//                 count++;
//             }
//             ec--;
//             for(int i = ec; count< t && i>=sc; i--) {
//                 a.push_back(matrix[er][i]);
//                 count++;
//             }
//             er--;
//             for(int i = er; count< t && i>=sr; i--) {
//                 a.push_back(matrix[i][sc]);
//                 count++;
//             }
//             sc++;
//         } 
//         return a;
//     }
=======
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> a;
//         int r = matrix.size();
//         int c = matrix[0].size();
        
//         int count = 0;
//         int t = r*c;

//         int sr = 0;
//         int sc = 0;
//         int er = r-1;
//         int ec = c-1;
        
        
//         while(count < t) {
//             for(int i = sc; count< t && i<=ec; i++) {
//                 a.push_back(matrix[sr][i]);
//                 count++;
//             }
//             sr++;
//             for(int i = sr; count< t && i<=er; i++) {
//                 a.push_back(matrix[i][ec]);
//                 count++;
//             }
//             ec--;
//             for(int i = ec; count< t && i>=sc; i--) {
//                 a.push_back(matrix[er][i]);
//                 count++;
//             }
//             er--;
//             for(int i = er; count< t && i>=sr; i--) {
//                 a.push_back(matrix[i][sc]);
//                 count++;
//             }
//             sc++;
//         } 
//         return a;
//     }
>>>>>>> 3bff3d08f24ad2857c8ef7b63920d6c9de4ed0c8
// };