//
//  CarTableViewCell.h
//  cells
//
//  Created by James Tang on 18/5/14.
//  Copyright (c) 2014 James Tang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CarPresenter;

@interface CarTableViewCell : UITableViewCell

@property (nonatomic, strong) IBOutlet CarPresenter *presenter;

@end