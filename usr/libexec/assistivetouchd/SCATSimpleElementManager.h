//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATElementManager.h"

@class NSArray;

@interface SCATSimpleElementManager : SCATElementManager
{
}

- (_Bool)containsElement:(id)arg1;	// IMP=0x0000000100088c1c
- (id)elementAfter:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x0000000100088b04
- (id)elementBefore:(id)arg1 didWrap:(_Bool *)arg2 options:(int *)arg3;	// IMP=0x0000000100088a00
- (id)lastElementWithOptions:(int *)arg1;	// IMP=0x00000001000889ac
- (id)firstElementWithOptions:(int *)arg1;	// IMP=0x0000000100088958
- (id)numberOfItemsInCurrentScanCycle;	// IMP=0x00000001000888e8
- (id)identifier;	// IMP=0x00000001000888d4
@property(readonly, nonatomic) NSArray *allElements;

@end

