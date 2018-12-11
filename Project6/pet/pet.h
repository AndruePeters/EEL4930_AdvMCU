#ifndef __PET_H__
#define __PET_H__


/*
 * Generally described properties of a digital pet.
 *
 * health is the current health of the pet.
 * health_max is the health limit. health <= health_max
 *
 * food is the current food level of the pet
 * food_max is the food limit. food < food_max
 *
 * water is the current water level of the pet
 * water_max is the water limit. water < water_max
 */
struct pet_life_prop {
     int32_t health;
     int32_t health_max;

     int32_t food;
     int32_t food_max;

     int32_t water;
     int32_t water_max;
};

/*
 * Describes the properties of the pet graphic
 *
 * pet_img is a pointer to Graphics_Image of the pet graphic
 * pet_inverse_img is is the blanked out version of pet_img. Should be same dimmensions of pet_img
 *
 * img_ht is the height of pet_img and pet_inverse_img
 * img_wd is the width of pet_img and pet_inverse_img
 *
 * (x_coord, y_coord) describes the middle point of pet_img
 */
struct pet_disp_prop {
    Graphics_Image* pet_img;
    Graphics_Image* pet_inverse_img;
    uint8_t img_ht;
    uint8_t img_wdt;
    uint8_t x_coord;
    uint8_t y_coord;
};





















































#endif
