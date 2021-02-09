#include <queue>

struct rect{
    int slice_number;
    int y_start;
    rect(int sn, int y) : slice_number(sn), y_start(y) {};
};

class prodCons {
    public :
        int taille_max_queue = 5;
        std::priority_queue<rect> rects;
        int put(rect r);
        rect get();
};