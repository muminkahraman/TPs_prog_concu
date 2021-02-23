#include "prodCons.h"


int prodCons::put(rect & r){
    std::unique_lock<std::mutex> lck(mtx);
    //if (rects.size() < taille_max_queue){
    if (1){
        rects.push(r);
        return 1;
    }
    else {
        return -1;
    }
}

rect prodCons::get(){
    std::unique_lock<std::mutex> lck(mtx);
    if (rects.size() > 0 ){
        rect aux = rects.front();
        rects.pop();
        return aux;
    }
    else{
        return (rect(-1,-1));
    }
}
bool rect::estEgal(rect const& b)
{
    return (slice_number == b.slice_number && y_start == b.y_start );
}