//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSApplicationTerminationAssertion;

@interface MIApplicationTerminationAssertion : NSObject
{
    FBSApplicationTerminationAssertion *_termAssertion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005c274
@property(retain, nonatomic) FBSApplicationTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
- (void)dealloc;	// IMP=0x000000010005c200
- (void)invalidate;	// IMP=0x000000010005c1a8
- (id)initWithBundleIdentifier:(id)arg1 reason:(unsigned char)arg2;	// IMP=0x000000010005bde4

@end

