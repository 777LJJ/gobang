//
//  CheckerboardView.h
//  五子棋
//
//  Created by J J on 2018/4/11.
//  Copyright © 2018年 J J. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CheckerboardView : UIView

- (void)backOneStep:(UIButton *)sender;
- (void)newGame;
- (void)changeBoardLevel;

@end
