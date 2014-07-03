/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
#import <UIKit/UIKit.h>

@interface MMOAuthHandler : NSObject

/**
 Presents the view controller with a webview on top of another view controller.

 @param URL The URL to display in the webview.
 @param controller The view controller on which the webview is presented.
 @param animated Pass YES to animate the presentation; otherwise, pass NO.
 @param completion A completion handler, or NULL.
 @param dismissCompletion A dismiss completion handler, or NULL.

 */
+ (void)presentWebViewWithURL:(NSURL *)URL
             onViewController:(UIViewController *)controller
                     animated:(BOOL)flag
                   completion:(void (^)(void))completion
            dismissCompletion:(void (^)(void))dismissCompletion;

/**
 * Posted when an OAuth Login Exception is received.
 */
extern NSString *const MMOAuthLoginExceptionReceived;

/**
 * Posted when a OAuth flow is complete.
 * This event can be used to close a custom web view for example.
 */
extern NSString *const MMOAuthFlowComplete;

@end
