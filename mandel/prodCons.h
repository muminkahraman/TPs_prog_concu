#include <queue>
#include <mutex>

class rect{
    public :
        int slice_number;
        int y_start;
        rect(int sn, int y) : slice_number(sn), y_start(y) {};
        bool estEgal(rect const& b);
};

class prodCons {
    public :
        std::mutex mtx;
        std::queue<rect> rects;
        //int taille_max_queue = 5;
        int put(rect & r);
        rect get();
};