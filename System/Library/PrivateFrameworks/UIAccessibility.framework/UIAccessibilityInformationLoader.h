/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject {

	NSTimer* _coalesceTimer;

}
+(id)sharedInstance;
-(id)_init;
-(void)setNeedsLoadAccessibilityInformation;
-(void)_loadAccessibilityInformationOnMainThread:(BOOL)arg1 ;
-(void)_setNeedsLoadAccessibilityInformationOnMainThread;
-(void)_coalesceTimerFired:(id)arg1 ;
-(void)loadAccessibilityInformation;
@end

