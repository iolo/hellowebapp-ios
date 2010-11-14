//
//  HelloWebAppAppDelegate.h
//  HelloWebApp
//
//  Created by Dongsu Jang on 10. 11. 14..
//  Copyright 2010 KTH Corp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWebAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	UIWebView *webView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIWebView *webView;

@end

