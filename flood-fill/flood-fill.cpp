class Solution {
private:
    void flood(vector<vector<int>> &image, int sr, int sc, int start_color, int color) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() ) {
            return;
        }
        if (image[sr][sc] == color || image[sr][sc] != start_color) {
            return;
        }

        image[sr][sc] = color;
    
        flood(image, sr - 1, sc, start_color, color);
        
        flood(image, sr + 1, sc, start_color, color);
        
        flood(image, sr, sc - 1, start_color, color);
 
        flood(image, sr, sc + 1, start_color, color);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int start_color = image[sr][sc];
        flood(image, sr, sc, start_color, color);

        return image;
    }
};