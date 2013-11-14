//
//  MMLoginServiceDelegate.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

/**
 * The `MMLoginServiceDelegate` protocol defines the optional methods implemented by delegates of `MMLoginService` objects.
 */
@protocol MMLoginServiceDelegate <NSObject>

@optional

/** Tells the delegate that the login service will attempt to login. */
- (void)loginServiceWillLogin;

/** Tells the delegate that the login service was able to successfully login. */
- (void)loginServiceDidLogin;

/**
 Tells the delegate that the login service failed to login.
 
 @param error A `NSError` object describing the error that occured.
 
 */
- (void)loginServiceLoginAttemptFailedWithError:(NSError *)error;

/**
 Tells the delegate that the login service should attempt to login.
 
 The delegate would most likely present a login form to capture the credentials and then instruct the login service to attempt login on receiving this event notification.
 
 @param error A `NSError` object describing the error that occured.
 
 */
- (void)loginServiceNeedsToAttemptLogin:(NSError *)error;

@end