//
//  FoodViewController.h
//  ShoppingCart
//
//  Created by 戸田 真紀 on 2017-03-08.
//  Copyright © 2017 CICCC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Food.h"
#import "FoodTableViewCell.h"

@class FoodViewController;

@protocol FoodDelegate <NSObject>

@required
- (void) foodItem:(Food *)item;

@end


@interface FoodViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<FoodDelegate> delegate;
@property (strong, nonatomic) Food *item;
@property (weak, nonatomic) IBOutlet UITableView *foodTableView;
@property (strong, nonatomic) NSMutableArray<NSString *> *dataSourceForLabel;
@property (strong, nonatomic) NSMutableArray<NSString *> *dataSourceForTextField;

@end
