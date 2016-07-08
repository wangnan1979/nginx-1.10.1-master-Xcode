//
//  og_config.h
//  nginx-src
//
//  Created by 王南 on 16/7/5.
//  Copyright © 2016年 ourgame. All rights reserved.
//

#ifndef og_config_h
#define og_config_h

////////////////////////
/**
 * Message protocol encode.
 *
 * og message format:
 * +-----------+---------+------------------+
 * | ********* | body len|       body       |
 * +-----------+---------+------------------+
 * |       head          |
 * +---------------------+
 * Head: 8bytes
 *
 * 63~16bit: reserve,
 *
 * 15~0bit: body length (0~64K) big-endian
 * Body: body length bytes
**/
////////////////////////
 
 
#define OG_HEAD_SIZE 8

#define OG_BODY_SIZE(head) \
        （ntohs(*((unsigned short *)((unsigned char *)head + 6)))）

#endif /* og_config_h */
