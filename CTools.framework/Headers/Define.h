//
//  MHDefine.h
//  CTools
//
//  Created by Chance on 15/7/2.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#ifndef CTools_Define_h
#define CTools_Define_h

/**
 *  在此处定义宏
 */

//宏定义AlertView
#define SHOW_ALERT(_message_) UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"温馨提示" message:_message_ delegate:nil cancelButtonTitle:@"我知道啦！" otherButtonTitles: nil]; \
[alert show];

// 设备屏幕尺寸
#define IPHONE_4 CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(320, 480))
#define IPHONE_5 CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(320, 568))
#define IPHONE_6 CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(375, 667))
#define IPHONE_6P CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(414, 736))

// 界面常用颜色
#define kDefault_Color [UIColor colorWithRed:0.3373 green:0.6706 blue:0.3569 alpha:1]

/**
 *  主屏的宽
 */
#define kScreenWidth [[UIScreen mainScreen] bounds].size.width

/**
 *  主屏的高
 */
#define kScreenHeight [[UIScreen mainScreen] bounds].size.height

/**
 *  主屏的大小
 */
#define kScreenBounds  [[UIScreen mainScreen] bounds]

/**
 *  主屏的frame
 */
#define kScreenFrame  [UIScreen mainScreen].applicationFrame

/**
 *  主屏的size
 */
#define kScreenSize   [[UIScreen mainScreen] bounds].size

// 此App中使用的自定义字体名称
#define kDefault_FontName @"DFShaoNvW5"

// Function

#define STR(FORMAT, ...) [NSString stringWithFormat:FORMAT, ##__VA_ARGS__]

// UIViewAutoresizing
#define kAutoNone     UIViewAutoresizingNone                  // 不自动调整
#define kAutoTop      UIViewAutoresizingFlexibleBottomMargin  // 自动调整底边 与superView 顶边 距离不变
#define kAutoRight    UIViewAutoresizingFlexibleLeftMargin    // 自动调整左边 与superView 右边 距离不变
#define kAutoBottom   UIViewAutoresizingFlexibleTopMargin     // 自动调整顶边 与superView 底部 距离不变
#define kAutoLeft     UIViewAutoresizingFlexibleRightMargin   // 自动调整右边 与superView 左边 距离不变
#define kAutoWidth    UIViewAutoresizingFlexibleWidth         // 自动调整宽度 与superView 左边 右边 距离不变
#define kAutoHeight   UIViewAutoresizingFlexibleHeight        // 自动调整高度 与superView 顶边 底边 距离不变
// 与superView 上下左右 距离不变
#define AutoHV        (UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight)

// NSLog
#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"%s:%d　\t%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif








#endif
