#include <queue>

struct rect{
    int slice_number;
    int y_start;
    rect(int sn, int y) : slice_number(sn), y_start(y) {};
};

class prodCons {
    public :
        std::priority_queue<rect> rects;
        void put(rect r);
        rect get();
};