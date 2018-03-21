//
//  YFDefine.h
//  YFPlayerPushStreaming-Demo
//
//  Created by apple on 2018/2/7.
//  Copyright © 2018年 YunFan. All rights reserved.
//

#ifndef YFDefine_h
#define YFDefine_h

#define SCREEN_WIDTH   [UIScreen mainScreen].bounds.size.width
#define SCREENH_HEIGHT [UIScreen mainScreen].bounds.size.height
#define SafeAreaTopHeight (SCREENH_HEIGHT == 812.0 ? 88 : 64)
#define ProgressTopHeight (SCREENH_HEIGHT == 812.0 ? 40 : 0)


#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)

#endif /* YFDefine_h */

