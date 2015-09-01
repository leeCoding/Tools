//
//  UILabel+Additions.h
//  CTools
//
//  Created by Chance on 15/7/11.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Additions)
@property (nonatomic, assign) CGFloat fontSize;

/// label大小适应内容 只能在设置内容后调用
- (void)resizing;
@end
