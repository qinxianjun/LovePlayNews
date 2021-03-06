//
//  LPNewsListViewController.h
//  LovePlayNews
//
//  Created by tany on 16/8/3.
//  Copyright © 2016年 tany. All rights reserved.
//

#import <AsyncDisplayKit/AsyncDisplayKit.h>

@interface LPNewsListController : ASViewController

@property (nonatomic, strong) NSString *newsTopId;
@property (nonatomic, assign) NSInteger sourceType;

@property (nonatomic, assign) BOOL extendedTabBarInset; // 扩展到底部tabbar

@end
