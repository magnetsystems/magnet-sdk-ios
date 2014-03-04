//
//  MMControllerMethod.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@interface MMControllerMethod : NSObject

@property(nonatomic, copy) NSString *method;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSArray *parameters;
@property(nonatomic, copy) NSString *path;
@property(nonatomic, copy) NSString *returnType;

// Is the returnType an Entity?
@property(nonatomic, assign) BOOL isReturnTypeAnEntity;

// Is the returnType an MMResourceNode?
@property(nonatomic, assign) BOOL isReturnTypeANode;

@property(nonatomic, copy) NSSet *produces;

@property(nonatomic, copy) NSSet *consumes;

@end
