//
//  MultimodeLabel.h
//  YYOptimizedTableViewDemo
//
//  Created by CaoYuanyuan on 2016/3/2.
//  Copyright © 2016年 cyy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MultimodeLabel : UIView

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic) NSInteger lineSpace;
@property (nonatomic) NSTextAlignment textAlignment;

- (void)debugDraw;
- (void)clear;
- (BOOL)touchPoint:(CGPoint)point;

@end
