//
//  CActionSheet.h
//  CTools
//
//  Created by Chance on 15/4/29.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CActionSheetDelegate;

/// 单例类 效果类似 UIActionSheet
@interface CActionSheet : NSObject
/**
 *  代理
 */
@property(nonatomic,assign) id<CActionSheetDelegate> delegate;
/**
 *  标题 (未使用)
 */
@property(nonatomic,copy) NSString *title;

+ (instancetype)sharedActionSheet;

/**
 *  设置弹出视图 标题 代理 取消按钮标题 其他按钮
 */
- (void)setTitle:(NSString *)title delegate:(id<CActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles otherButtonImages:(NSArray *)otherButtonImages;

/// 显示 ActionSheet
- (void)show;
@end

@protocol CActionSheetDelegate <NSObject>
@optional
/**
 *  点击列表项
 */
- (void)actionSheet:(CActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex;
/**
 *  点击取消
 */
- (void)actionSheetCancel:(CActionSheet *)actionSheet;

@end