#include "physicpps.h"

namespace physicpps {

static bool rectCollide(rectangle& rect1, rectangle& rect2){
    // check collistion, return if true
    if (rect1.x < rect2.x + rect2.width &&  // check left side
    rect1.x + rect1.width > rect2.x &&      // check right
    rect1.y < rect2.y + rect2.height &&     // check up
    rect1.y + rect1.height > rect2.y) {     // check down
        return true;
    } else {
        // else, return false
        return false;
    }
};







};