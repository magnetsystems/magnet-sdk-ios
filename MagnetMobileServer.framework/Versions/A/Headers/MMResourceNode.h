//
//  MMResourceNode.h
//
//
//  Copyright (c) 2013 Magnet Systems, Inc. All rights reserved.
//

@interface MMResourceNode : NSObject <NSCoding>

/** Type of the node. */
@property(nonatomic, copy) NSString *magnetType;

/** List of attributes. */
+ (NSDictionary *)attributeMappings;

/** 1-1 relationship mappings. */
+ (NSDictionary *)oneToOneRelationshipMappings;

/** 1-n relationship mappings. */
+ (NSDictionary *)oneToManyRelationshipMappings;

/** Sets up mappings for REST communication. */
+ (void)setupMappings;

@end
