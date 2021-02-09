#include "prodCons.h"

int prodCons::put(rect r){
    if (rects.size() < taille_max_queue){
        rects.push(r);
        return 1;
    }
    else {
        return -1;
    }
}

rect prodCons::get(){

}