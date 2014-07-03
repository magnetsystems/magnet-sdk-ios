/**
 * Copyright (c) 2012-2014 Magnet Systems, Inc. All rights reserved.
 */
 
@interface MMLoginCredentials : NSObject

@property (nonatomic, copy) NSString *authority;

@property (nonatomic, copy) NSString *userName;

@property(nonatomic, copy) NSString *password;

@property (nonatomic, copy) NSString *serverAddress;

@property (nonatomic, copy) NSString *deviceId;

@property (nonatomic, assign) BOOL useSSL;

@property (nonatomic, assign) BOOL trustAllCertificates;

@end
