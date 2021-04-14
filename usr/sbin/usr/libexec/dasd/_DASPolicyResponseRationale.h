//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPredicate, NSString;

@interface _DASPolicyResponseRationale : NSObject
{
    long long _responseOptions;	// 8 = 0x8
    NSString *_policyName;	// 16 = 0x10
    NSPredicate *_condition;	// 24 = 0x18
    NSMutableArray *_reasons;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002f9f4
@property(retain, nonatomic) NSMutableArray *reasons; // @synthesize reasons=_reasons;
@property(retain, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
@property(nonatomic) long long responseOptions; // @synthesize responseOptions=_responseOptions;
- (void)addRationaleWithCondition:(id)arg1;	// IMP=0x000000010002f8bc
- (void)addRationaleForCondition:(id)arg1 withRequiredValue:(double)arg2 withCurrentValue:(double)arg3;	// IMP=0x000000010002f830
- (id)initWithPolicyName:(id)arg1;	// IMP=0x000000010002f78c
- (id)description;	// IMP=0x000000010002f574

@end
