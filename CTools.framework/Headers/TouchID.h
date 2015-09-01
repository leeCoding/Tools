//
//  TouchID.h
//  MHProject
//
//  Created by 董駸 on 15/6/15.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TouchID : NSObject

+ (TouchID *)usedTouchID;

/**
 *  启动指纹验证
 *
 *  @param complet success 是否成功  
 */
- (void)showTouchIdOnComplet:(void (^)(BOOL success, NSError *authenticationError))complet failed:(void(^)(NSError *authenticationError))failed;

@end
