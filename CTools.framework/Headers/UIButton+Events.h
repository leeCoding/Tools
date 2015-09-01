//
//  UIButton+Events.h
//  Chance
//
//  Created by Chance on 15/8/31.
//  Copyright © 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Events)
@property (nonatomic, strong, readonly) NSMutableDictionary *actions; // 所有事件

// 添加事件
- (void)addControlEvents:(UIControlEvents)controlEvents withAction:(void(^)())action forKey:(NSString *)key;
// 移除事件
- (void)removeControlEvents:(UIControlEvents)controlEvents forKey:(NSString *)key;
@end
