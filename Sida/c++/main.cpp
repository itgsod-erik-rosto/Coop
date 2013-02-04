#include <allegro.h>

BITMAP *buffer;
BITMAP *login1;
BITMAP *lista1;

int currentstage=0;

int main(){

    allegro_init();
    install_keyboard();
    install_mouse();
    set_color_depth(32);
    set_gfx_mode( GFX_AUTODETECT_WINDOWED, 1340, 700, 0, 0);
    
    buffer=create_bitmap(1340, 700);
    
    lista1=load_bitmap("../Skiss/Lista1.bmp", NULL);
    login1=load_bitmap("../Skiss/loggain.bmp", NULL);
    
    
    mouse_x=20;
 mouse_y=20;
 mouse_b;
 set_mouse_speed(1, 3);
 
    while( !key[KEY_ESC])
    
    {
     if (key[KEY_1])
     currentstage=1;
     
     if (key[KEY_0])
     currentstage=0;
           
     if (currentstage==0)
     {
                         
     blit (login1, buffer, 0, 0, 0, 0, 1340, 700);
                         }
                         if (currentstage==1)
                         {
                                             
     blit (lista1, buffer, 0, 0, 0, 0, 1340, 700);
     
                                             }
     
      textprintf_ex(buffer, font, 900, 30, makecol(255, 0, 0), -1, "x: %i", mouse_x);
      textprintf_ex(buffer, font, 900, 40, makecol(255, 0, 0), -1, "y: %i", mouse_y);
      
    circlefill(buffer, mouse_x, mouse_y, 5, makecol(255, 255, 255));
   
   
        rest(10);
   blit (buffer, screen, 0, 0, 0, 0, 1340, 700);
   clear_bitmap(buffer);
    }    
    
    return 0;

}
END_OF_MAIN();
