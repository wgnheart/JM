//
//  jm.h
//  JM
//
//  Created by Geng on 2019/10/20.
//

#ifndef jm_h
#define jm_h




int jmdec_init();



int jmdec_decode(unsigned char *buf, int size);

void jmdec_close();



#endif /* jm_h */
