//
//  MMControllerParam.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@interface MMControllerParam : NSObject

@property(nonatomic, copy) NSString *name;
@property(nonatomic, strong) NSNumber *optional;
@property(nonatomic, copy) NSString *style;
@property(nonatomic, copy) NSString *type;

/** Returns the RestKit mapping for the class */
//+ (RKObjectMapping *)restMapping;

@end
