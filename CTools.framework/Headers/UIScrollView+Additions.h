//
//  UIScrollView+Additions.h
//  CTools
//
//  Created by Chance on 15/7/11.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (Additions)

/**
 *  内容区高度
 */
@property (nonatomic, assign) CGFloat contentHeight;

/**
 *  内容区宽度
 */
@property (nonatomic, assign) CGFloat contentWidth;

// 边缘距离
@property (nonatomic, assign) CGFloat contentInsetTop;
@property (nonatomic, assign) CGFloat contentInsetBottom;
@property (nonatomic, assign) CGFloat contentInsetLeft;
@property (nonatomic, assign) CGFloat contentInsetRight;

// 内容偏移量
@property (nonatomic, assign) CGFloat contentOffsetX;
@property (nonatomic, assign) CGFloat contentOffsetY;

- (void)scrollToBottom;
- (void)scrollToBottomAnimation:(BOOL)animation;
@end
