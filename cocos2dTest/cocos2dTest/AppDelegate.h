//
//  AppDelegate.h
//  cocos2dTest
//
//  Created by Benjamin Lee on 8/4/11.
//  Copyright Cisco 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
