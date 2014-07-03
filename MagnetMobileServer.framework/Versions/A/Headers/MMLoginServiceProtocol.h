/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
@protocol MMLoginServiceDelegate;
@class MMLoginCredentials;
@class MMCall;

/**
 * The MMLoginServiceProtocol protocol defines the operations that can be performed using the MMLoginService.
 */
@protocol MMLoginServiceProtocol <NSObject>

/** Defines the login service delegate. 
 * @see MMLoginServiceDelegate
 */
@property(nonatomic, weak) id <MMLoginServiceDelegate> delegate;

/** Contains the login credentials. */
@property(nonatomic, strong) MMLoginCredentials *credentials;

/**
 Asynchronous operation: attempts authentication using the specified login credentials.
 
 @param credentials The login credentials object containing the username, password, server address and so on.
 @param block The block to be executed on the completion of the request. This block has no return value and takes two arguments: the success flag and the error that occurred during the request.
 
 */
- (MMCall *)loginWithCredentials:(MMLoginCredentials *)credentials
                       block:(void (^)(BOOL success, NSError *error))block;

/**
 Asynchronous operation: logs in to the Magnet Mobile App Server using stored credentials. If the credentials are missing, the error callback will be fired.

 @param block The block to be executed on the completion of the request. This block has no return value and takes two arguments: the success flag and the error that occurred during the request.
 
 */
- (void)loginWithSavedCredentials:(void (^)(BOOL success, NSError *error))block;

/** Logs the current user out from the Magnet Mobile App Server. */
- (MMCall *)logout;

@end
