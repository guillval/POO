#include "Drawing.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image_write.h>
#include <stdexcept>
#include "Figure.h"
#include "Croix.h"
#include "Point.h"
#include "Rectangle.h"
#include "Carre.h"
//            _    _  _                     _    _           _
//  ___  _ _ | |_ | |<_> ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| | || . \| || |/ | ' | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/`___||___/|_||_|\_|_. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

Drawing::Drawing(const int width, const int height)
    : width(width), height(height) {
  image.resize(width * height);
}

Drawing::~Drawing() {}

/* Save image to file "filename" */
void Drawing::save(std::string filename) {

  if (filename.substr(filename.find_last_of(".") + 1) != "bmp") {
    throw std::runtime_error(
        "Drawing ne supporte que l'enregistrement d'images au format bmp");
  }

  createTestImage();
  stbi_write_bmp(filename.c_str(), width, height, 1, image.data());
}

//            _             _                      _    _           _
//  ___  _ _ <_> _ _  ___ _| |_ ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| '_>| || | |<_> | | | / ._> | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/|_|  |_||__/ <___| |_| \___. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

/* Set every point of the image to 0 */
void Drawing::clearImage() {
  for (std::vector<char>::iterator it = image.begin(); it != image.end();
       it++) {
    *it = 0;
  }
}

/* Set image to test */
void Drawing::createTestImage() {
Point p(50,50); 
Croix c(width,height,p);
Rectangle r(width,height,p,30,20);
Carre ca(width,height,p,30);
image=ca.GetVector();
 
}
