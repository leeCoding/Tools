//
//  UIAlertView+Additions.h
//  CTools
//
//  Created by Chance on 15/7/15.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (Additions) <UIAlertViewDelegate>
@property (nonatomic, assign) NSInteger functionIndex;
@property (nonatomic, strong) id userInfo;

@property (nonatomic, copy) void(^cancelButtonBlock)(UIAlertView *alertView);
@property (nonatomic, copy) void(^clickedButtonBlock)(UIAlertView *alertView, NSInteger buttonIndex);

@property (nonatomic, copy) void(^cancelButtonBlockPlus)(UIAlertView *alertView, id userInfo);
@property (nonatomic, copy) void(^clickedButtonBlockPlus)(UIAlertView *alertView, id userInfo, NSInteger buttonIndex);

- (UIAlertView *)initWithTitle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles;
- (void)clickedButtonBlock:(void(^)(UIAlertView *alertView, NSInteger buttonIndex))ok cancelButtonBlock:(void(^)(UIAlertView *alertView))cancel;
- (void)clickedButtonBlock:(void(^)(UIAlertView *alertView, id userInfo, NSInteger buttonIndex))ok cancelButtonBlock:(void(^)(UIAlertView *alertView, id userInfo))cancel userInfo:(id)userInfo;

@end

@interface UIAlertView (Static_Additions)
+ (UIAlertView *)showAlertViewWithTitle:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles;
+ (void)showAlertViewClickedButtonBlock:(void(^)(UIAlertView *alertView, NSInteger buttonIndex))ok cancelButtonBlock:(void(^)(UIAlertView *alertView))cancel;
+ (void)showAlertViewClickedButtonBlock:(void(^)(UIAlertView *alertView, id userInfo, NSInteger buttonIndex))ok cancelButtonBlock:(void(^)(UIAlertView *alertView, id userInfo))cancel userInfo:(id)userInfo;
@end