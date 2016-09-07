//
//  STKWebKitViewControllerDelegate.h
//  Pods
//
//  Created by Sebastián Varela on 8/9/16.
//
//

#import <Foundation/Foundation.h>

@class STKWebKitViewController;

@protocol STKWebKitViewControllerDelegate <NSObject>

@optional

- (void)stkWebKitViewControllerStartLoadingWebPage:(STKWebKitViewController *)stkWebKitViewController;

- (void)stkWebKitViewControllerFinishLoadingWebPage:(STKWebKitViewController *)stkWebKitViewController;

@end
