//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBUITopShelfParadeNamedAttribute-Protocol.h"

@class NSArray, NSString;

@interface HBTopShelfNamedAttribute : NSObject <HBUITopShelfParadeNamedAttribute>
{
    NSString *_name;	// 8 = 0x8
    NSArray *_values;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003e370
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 values:(id)arg2;	// IMP=0x000000010003e1a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

