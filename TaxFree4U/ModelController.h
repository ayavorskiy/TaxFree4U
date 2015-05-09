//
//  ModelController.h
//  TaxFree4U
//
//  Created by Aleksey Yavorskiy on 09/05/2015.
//  Copyright (c) 2015 TaxFree4U. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

