//
//  SingleTool.h
//  CTool
//
//  Created by Chance on 15/8/11.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SingleTool : NSObject
+ (instancetype)sharedSingleTool;
- (NSString *)stringWithDate:(NSDate *)date format:(NSString *)format;
- (NSDate *)dateWithString:(NSString *)string format:(NSString *)format;
@end

@interface NSDate (DateFormater)
- (NSString *)stringWithDateFormater:(NSString *)format;

@end

@interface NSString (DateFormater)
- (NSDate *)dateWithDateFormater:(NSString *)format;

@end