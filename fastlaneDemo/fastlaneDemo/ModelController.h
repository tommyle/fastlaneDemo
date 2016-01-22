//
//  ModelController.h
//  fastlaneDemo
//
//  Created by Tommy Le on 2016-01-22.
//  Copyright © 2016 Tommy Le. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

