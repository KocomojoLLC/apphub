//
//  AHBuild+Private.h
//  AppHub
//
//  Copyright (c) 2015 AppHub. All rights reserved.
//

#import "AHBuild.h"

@interface AHBuild ()

- (instancetype)initWithBundle:(NSBundle *)bundle info:(NSDictionary *)info NS_DESIGNATED_INITIALIZER;

- (NSDictionary *)dictionaryValue;

@end
