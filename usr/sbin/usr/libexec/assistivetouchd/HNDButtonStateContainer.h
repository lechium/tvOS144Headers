//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HNDButtonStateContainer : NSObject
{
    NSNumber *_upButton;	// 8 = 0x8
    NSNumber *_downButton;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002f390
@property(readonly, nonatomic) NSNumber *downButton; // @synthesize downButton=_downButton;
@property(readonly, nonatomic) NSNumber *upButton; // @synthesize upButton=_upButton;
- (id)initWithUpButton:(id)arg1 downButton:(id)arg2;	// IMP=0x000000010002f2dc

@end

