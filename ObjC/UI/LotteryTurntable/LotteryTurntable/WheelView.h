//
//  WheelView.h
//  LotteryTurntable
//
//  Created by 郭伟林 on 15/9/23.
//  Copyright (c) 2015年 郭伟林. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WheelView : UIView

+ (instancetype)wheel;

- (void)startRotating;
- (void)stopRotating;

@end
