//
//  MMLoginServiceProtocol.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

#import "MMLoginServiceDelegate.h"

/**
 * The MMLoginServiceProtocol protocol defines the operations that can be performed using the `MMLoginService`.
 */
@protocol MMLoginServiceProtocol <NSObject>

/** Defines the login service delegate. 
 * @see MMLoginServiceDelegate
 */
@property(nonatomic, weak) id <MMLoginServiceDelegate> delegate;

/** Credentials container. */
@property(nonatomic, copy) NSDictionary *credentials;

/**
 Asynchronous operation, attempts authentication using provided credentials.
 
 @param credentials A dictionary containing credentials.
 @param block A block object to be executed when the request succeeds. This block has no return value and takes one argument: a `BOOL` that denotes authentication success or failure.
 
 */
- (void)loginWithCredentials:(NSDictionary *)credentials
                       block:(void (^)(BOOL success))block;

/**
 Asynchronous operation, attempts authentication using saved credentials.
 
 @param block A block object to be executed when the request succeeds. This block has no return value and takes one argument: a `BOOL` that denotes authentication success or failure.
 
 */
- (void)loginWithSavedCredentials:(void (^)(BOOL success))block;

/** Logs the current user out. */
- (void)logout;

@end
