//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDUnitLogRule.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SDUnitLogDirectory : SDUnitLogRule
{
    NSString *_directory;	// 128 = 0x80
}

+ (id)logRuleWithDirectory:(id)arg1 atInternalDirectory:(id)arg2;	// IMP=0x00000001000093e4
+ (id)logRuleWithDirectory:(id)arg1 withDepth:(unsigned long long)arg2 withDate:(id)arg3 withFilter:(id)arg4 newestFileCount:(unsigned long long)arg5 atInternalDirectory:(id)arg6 withRuntimeChecks:(unsigned long long)arg7;	// IMP=0x00000001000092cc
+ (id)logRuleWithDirectory:(id)arg1;	// IMP=0x0000000100009240
- (void).cxx_destruct;	// IMP=0x0000000100009b04
@property(retain) NSString *directory; // @synthesize directory=_directory;
- (id)description;	// IMP=0x0000000100009a74
- (id)getNextMatch;	// IMP=0x0000000100009494

@end

