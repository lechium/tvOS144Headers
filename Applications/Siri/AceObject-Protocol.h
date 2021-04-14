//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol AceContext;

@protocol AceObject <NSObject, NSCopying, NSMutableCopying, NSSecureCoding>
- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSMutableDictionary *)properties;
- (NSMutableDictionary *)dictionary;
- (id)initWithDictionary:(NSDictionary *)arg1 context:(id <AceContext>)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)init;
@end
