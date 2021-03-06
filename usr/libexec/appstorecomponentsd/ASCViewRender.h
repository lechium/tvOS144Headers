//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASCSignpostGroup-Protocol.h"

@class NSString;

@interface ASCViewRender : NSObject <ASCSignpostGroup>
{
}

+ (void)pageUserReadyWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014fb4
+ (void)resourceRequestDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014f04
+ (void)resourceRequestDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014e54
+ (void)rootViewModelPresentWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014da4
+ (void)rootViewModelParseDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014cf4
+ (void)rootViewModelParseDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014c44
+ (void)jsCallDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014b94
+ (void)jsCallDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014ae4
+ (void)requestDidEndWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014a34
+ (void)requestDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x0000000100014984
+ (void)launchCorrelationKeyWithTag:(unsigned long long)arg1 withString:(id)arg2;	// IMP=0x000000010001487c
+ (void)bootstrapDidEndWithTag:(unsigned long long)arg1;	// IMP=0x00000001000147cc
+ (void)bootstrapDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x000000010001471c
+ (void)pageRequestedWithTag:(unsigned long long)arg1;	// IMP=0x000000010001466c
+ (void)modelPrefetchDidEndWithTag:(unsigned long long)arg1;	// IMP=0x00000001000145bc
+ (void)modelPrefetchDidBeginWithTag:(unsigned long long)arg1;	// IMP=0x000000010001450c
+ (void)overlayRequestedWithTag:(unsigned long long)arg1;	// IMP=0x000000010001445c
+ (id)requiredFieldNames;	// IMP=0x00000001000143dc
+ (void)willEmitSignpostOfType:(long long)arg1 withName:(id)arg2;	// IMP=0x00000001000143d8
+ (id)log;	// IMP=0x00000001000142b0
+ (id)category;	// IMP=0x00000001000142a4
+ (id)subsystem;	// IMP=0x0000000100014298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

