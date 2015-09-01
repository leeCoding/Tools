//
//  Function.h
//  CTools
//
//  Created by Chance on 15/7/1.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Function : NSObject

// 倒计时
void countdownTimeout(NSTimeInterval startTime, NSTimeInterval interval, void(^runingExec)(NSTimeInterval currentTime), void(^stopExec)());

// 定时器
void timer_create(NSTimeInterval timeout, NSTimeInterval interval, void(^runingExec)(NSTimeInterval currentTime, BOOL *status), void(^stopExec)());

// 转换
NSString *strWithInt(int i);
NSURL *url(NSString *str);

/* UIColor */
UIColor *color_rgb(CGFloat r, CGFloat g, CGFloat b);
UIColor *color_rgba(CGFloat r, CGFloat g, CGFloat b, CGFloat a);
UIColor *color_rgb_(UInt8 r, UInt8 g, UInt8 b);
UIColor *color_rgba_(UInt8 r, UInt8 g, UInt8 b, CGFloat a);
UIColor *color_image(UIImage *image);

/* UIImage */
UIImage *image_name(NSString *name);
UIImage *image_color(UIColor *color);

/* 检查 */
/// 检查摄像头
BOOL checkValidateCamera();
/// 拨打电话(电话号码 number, 拨打前提示 isPrompt)
void callTelNumber(NSString *number, BOOL isPrompt);

/* 沙盒路径 */
// NSHomeDirectory()/Documents/
NSString *pathDocuments();
// NSHomeDirectory()/Library/Caches/
NSString *pathCaches();
// NSHomeDirectory()/Documents/<文件名>
NSString *pathDocumentsFileName(NSString *name);
// NSHomeDirectory()/<子路径>/<文件名>
NSString *pathDocumentsFilePathName(NSString *subPath, NSString *name);
// NSHomeDirectory()/<文件名>
NSString *pathCachesFileName(NSString *name);
// NSHomeDirectory()/<子路径>/<文件名>
NSString *pathCachesFilePathName(NSString *subPath, NSString *name);

@end
