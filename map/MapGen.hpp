#ifndef MAPGEN_HPP
#define MAPGEN_HPP

/*  map segment template
    {
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
*/
class MapGen {
    private:
        int n_sect = 6;
        int tl_lib[6][10][10] = {
            {   //lab_1
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                5, 0, 0, 0, 2, 0, 0, 0, 2, 0,
                5, 0, 0, 0, 2, 2, 2, 0, 2, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 2, 0,
                2, 2, 2, 2, 2, 0, 2, 2, 2, 0,
                2, 0, 0, 0, 2, 0, 0, 0, 0, 0,
                2, 0, 2, 7, 2, 0, 2, 2, 0, 2,
                2, 0, 2, 2, 2, 0, 2, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 2, 2,
                2, 0, 2, 2, 2, 2, 2, 0, 0, 2,
            },
            {   //lab_2
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                5, 0, 0, 0, 2, 0, 0, 0, 7, 2,
                5, 0, 0, 0, 2, 0, 2, 2, 2, 2,
                2, 0, 0, 0, 2, 0, 0, 0, 2, 0,
                2, 2, 0, 2, 2, 0, 2, 0, 2, 0,
                2, 2, 0, 0, 0, 0, 2, 0, 0, 0,
                2, 2, 2, 2, 0, 2, 2, 0, 2, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 2, 2, 2, 0, 2, 0, 2,
                2, 0, 2, 0, 0, 2, 0, 2, 0, 2,
            },
            {   //lab_3
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                5, 0, 0, 0, 0, 0, 2, 0, 0, 0,
                5, 0, 0, 0, 2, 0, 0, 0, 2, 2,
                2, 0, 0, 0, 2, 2, 2, 2, 2, 0,
                2, 2, 0, 2, 2, 0, 0, 0, 2, 0,
                2, 2, 0, 0, 0, 0, 2, 2, 0, 0,
                2, 2, 2, 2, 2, 0, 2, 2, 0, 2,
                2, 7, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 0, 2, 0, 2, 0, 2, 2, 2,
                2, 0, 0, 2, 2, 2, 0, 0, 2, 0,
            },
            {   //big_room_1
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                5, 0, 0, 0, 2, 7, 0, 0, 0, 2,
                5, 0, 0, 0, 2, 2, 2, 2, 0, 0,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 2, 0, 0, 2, 0, 0, 2,
                2, 0, 2, 0, 0, 0, 0, 0, 0, 0,
                2, 0, 2, 0, 2, 0, 0, 0, 0, 2,
                2, 0, 2, 0, 0, 0, 0, 2, 0, 2,
                2, 0, 2, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 0, 2, 2, 2, 2, 2, 2,
            },
            {   //big_room_2
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                5, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 2, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                2, 0, 0, 0, 0, 0, 7, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //big_room_3
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                5, 0, 0, 0, 2, 0, 0, 0, 0, 0,
                5, 0, 0, 0, 2, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 2, 0, 0, 0, 0,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 7, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 2, 2, 2, 2, 2, 2, 2,
            },
        };
        int tr_lib[6][10][10] = {
            {   //lab_1
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                0, 0, 0, 2, 2, 2, 0, 2, 2, 2,
                2, 2, 0, 2, 0, 0, 0, 0, 2, 2,
                0, 0, 0, 0, 0, 2, 2, 0, 2, 2,
                2, 2, 0, 2, 0, 2, 0, 0, 0, 2,
                0, 2, 0, 2, 0, 0, 0, 2, 7, 2,
                0, 2, 0, 2, 2, 2, 0, 2, 2, 2,
                0, 2, 0, 0, 0, 0, 0, 0, 0, 2,
                0, 0, 0, 2, 0, 2, 2, 2, 2, 2,
                0, 2, 0, 2, 0, 0, 0, 0, 0, 2,
            },
            {   //lab_2
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                0, 2, 0, 2, 2, 2, 7, 0, 0, 2,
                0, 2, 0, 0, 0, 2, 2, 2, 0, 2,
                0, 2, 0, 2, 0, 0, 2, 0, 0, 2,
                2, 2, 0, 2, 2, 0, 2, 0, 0, 2,
                0, 2, 0, 2, 0, 0, 2, 0, 0, 2,
                0, 0, 0, 0, 0, 2, 2, 2, 0, 2,
                2, 2, 2, 2, 0, 2, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 2, 0, 2,
                0, 0, 2, 2, 0, 2, 2, 2, 0, 2,
            },
            {   //lab_3
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                0, 2, 7, 0, 0, 0, 0, 0, 0, 2,
                0, 2, 2, 2, 2, 0, 2, 0, 2, 2,
                0, 2, 0, 0, 0, 0, 2, 0, 0, 2,
                2, 2, 2, 0, 2, 2, 2, 2, 0, 2,
                0, 0, 0, 0, 2, 0, 0, 0, 0, 2,
                0, 2, 2, 0, 0, 0, 2, 2, 2, 2,
                0, 2, 0, 2, 2, 0, 0, 0, 0, 2,
                0, 2, 0, 0, 0, 0, 2, 2, 2, 2,
                0, 2, 2, 2, 0, 2, 0, 0, 0, 2,
            },
            {   //big_room_1
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 2, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                0, 0, 2, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 2, 0, 2,
                2, 0, 7, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 0, 2, 2, 2, 0, 2,
            },
            {   //big_room_2
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 0, 0, 0, 0, 2, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 7, 0, 0, 0, 2,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 0, 0, 0, 0, 2, 0, 2,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 0, 2, 2, 2, 0, 2,
            },
            {      //big_room_3
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 0, 0, 0, 0, 7, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                0, 0, 0, 0, 2, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 2, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 0, 2, 2, 2, 0, 2,
            },
        };
        int bl_lib[6][10][10] = {
            {   //lab_1
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 2, 2, 2, 0, 2, 0, 2,
                2, 0, 0, 2, 0, 0, 0, 2, 0, 0,
                2, 2, 0, 2, 0, 2, 2, 2, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 2, 2, 0, 2, 2, 2, 2,
                2, 0, 2, 7, 2, 0, 0, 2, 0, 0,
                2, 0, 2, 0, 2, 2, 0, 2, 0, 2,
                2, 0, 0, 0, 2, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //lab_2
                2, 0, 0, 0, 0, 2, 0, 0, 0, 0,
                2, 2, 2, 2, 0, 2, 2, 2, 0, 2,
                2, 2, 0, 0, 0, 2, 0, 0, 0, 2,
                2, 2, 0, 2, 2, 0, 0, 2, 0, 0,
                2, 0, 0, 0, 2, 0, 0, 0, 0, 2,
                2, 0, 2, 0, 2, 0, 2, 2, 2, 2,
                2, 0, 2, 0, 0, 0, 2, 0, 0, 0,
                2, 7, 2, 0, 2, 0, 0, 0, 2, 2,
                2, 0, 0, 0, 2, 2, 2, 0, 0, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //lab_3
                2, 0, 0, 0, 2, 0, 0, 0, 2, 0,
                2, 0, 2, 2, 2, 0, 2, 0, 2, 2,
                2, 0, 0, 0, 2, 0, 2, 0, 0, 0,
                2, 2, 2, 0, 0, 0, 2, 0, 2, 2,
                2, 2, 0, 2, 2, 0, 2, 0, 0, 0,
                2, 0, 0, 0, 0, 0, 0, 0, 2, 0,
                2, 2, 2, 0, 2, 2, 2, 2, 2, 0,
                2, 0, 0, 0, 0, 2, 0, 0, 0, 2,
                2, 7, 2, 2, 0, 0, 0, 2, 0, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //big_room_1
                2, 0, 2, 0, 2, 2, 2, 2, 2, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 2, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 0, 0, 0, 2, 0, 0, 0,
                2, 7, 2, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //big_room_2
                2, 0, 2, 2, 0, 2, 2, 2, 2, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 2, 0, 0, 0, 2,
                2, 0, 2, 0, 0, 0, 2, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                2, 0, 7, 0, 0, 2, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //big_room_3
                2, 0, 2, 2, 0, 2, 2, 2, 2, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 2, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 7, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                2, 0, 2, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
        };
        int br_lib[6][10][10] = {
            {   //lab_1
                0, 2, 0, 0, 0, 2, 2, 2, 0, 2,
                0, 2, 2, 2, 0, 2, 7, 2, 2, 2,
                0, 2, 0, 0, 0, 2, 0, 0, 0, 2,
                2, 2, 0, 2, 2, 2, 2, 2, 0, 2,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 2, 2, 0, 2, 2, 2, 6, 2,
                0, 0, 0, 2, 0, 2, 0, 0, 0, 2,
                0, 2, 0, 2, 0, 2, 0, 0, 0, 4,
                0, 2, 0, 0, 0, 2, 0, 0, 0, 4,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //lab_2
                0, 2, 0, 0, 0, 0, 0, 2, 0, 2,
                0, 2, 0, 2, 2, 2, 0, 2, 2, 2,
                0, 2, 0, 0, 0, 2, 0, 0, 2, 2,
                0, 0, 2, 2, 0, 2, 2, 0, 2, 2,
                2, 0, 7, 2, 0, 0, 0, 0, 0, 2,
                2, 0, 2, 2, 0, 2, 6, 2, 2, 2,
                0, 0, 0, 0, 0, 2, 0, 0, 0, 2,
                0, 2, 2, 2, 2, 2, 0, 0, 0, 4,
                0, 0, 0, 0, 0, 6, 0, 0, 0, 4,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //lab_3
                0, 0, 0, 0, 0, 2, 0, 2, 0, 2,
                2, 2, 2, 2, 0, 2, 0, 2, 0, 2,
                0, 0, 0, 0, 0, 2, 0, 2, 7, 2,
                2, 2, 2, 0, 2, 2, 0, 2, 2, 2,
                2, 0, 2, 0, 0, 0, 0, 0, 2, 2,
                2, 0, 2, 0, 2, 2, 2, 6, 2, 2,
                0, 0, 0, 0, 0, 2, 0, 0, 0, 2,
                2, 2, 0, 2, 0, 6, 0, 0, 0, 4,
                0, 0, 0, 2, 2, 2, 0, 0, 0, 4,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //big_room_1
                2, 2, 2, 0, 0, 2, 2, 0, 2, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 2, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 7, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 2, 0, 0, 0, 2, 6, 2, 6, 2,
                0, 2, 0, 0, 0, 6, 0, 0, 0, 2,
                0, 2, 0, 0, 0, 2, 0, 0, 0, 4,
                0, 0, 0, 0, 0, 6, 0, 0, 0, 4,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //big_room_2
                2, 2, 2, 2, 0, 2, 2, 0, 2, 2,
                2, 7, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 2, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 2, 6, 6, 2,
                0, 0, 0, 0, 0, 2, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 2, 0, 0, 0, 4,
                2, 0, 0, 0, 0, 2, 0, 0, 0, 4,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
            {   //big_room_3
                2, 2, 2, 2, 0, 2, 2, 0, 2, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 2, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                2, 0, 0, 0, 7, 0, 0, 0, 0, 2,
                2, 0, 2, 0, 0, 0, 2, 2, 6, 2,
                0, 0, 0, 0, 0, 2, 0, 0, 0, 2,
                2, 0, 0, 0, 0, 2, 0, 0, 0, 4,
                2, 0, 0, 0, 0, 6, 0, 0, 0, 4,
                2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
            },
        };
        
    public:
        int map[20][20];
        void gen_map();
};

#endif