/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/informacion_screen/InformacionViewBase.hpp>
#include "BitmapDatabase.hpp"

InformacionViewBase::InformacionViewBase()
{
    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_TITLE_ID));

    swipeContainer1.setXY(0, 52);

    swipeContainer1Page1.setWidth(480);
    swipeContainer1Page1.setHeight(220);


    swipeContainer1.add(swipeContainer1Page1);

    swipeContainer1Page1_1.setWidth(480);
    swipeContainer1Page1_1.setHeight(220);


    swipeContainer1.add(swipeContainer1Page1_1);

    swipeContainer1Page1_2.setWidth(480);
    swipeContainer1Page1_2.setHeight(220);


    swipeContainer1.add(swipeContainer1Page1_2);

    swipeContainer1Page1_3.setWidth(480);
    swipeContainer1Page1_3.setHeight(220);


    swipeContainer1.add(swipeContainer1Page1_3);

    swipeContainer1Page1_4.setWidth(480);
    swipeContainer1Page1_4.setHeight(220);


    swipeContainer1.add(swipeContainer1Page1_4);

    swipeContainer1.setSwipeCutoff(50);
    swipeContainer1.setEndSwipeElasticWidth(50);
    swipeContainer1.setSelectedPage(0);

    add(image1);
    add(swipeContainer1);
}

void InformacionViewBase::setupScreen()
{

}
