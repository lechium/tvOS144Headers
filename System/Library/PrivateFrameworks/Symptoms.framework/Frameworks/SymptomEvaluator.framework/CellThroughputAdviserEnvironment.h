/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/ThroughputAdviserEnvironment.h>
#import <SymptomEvaluator/SymptomsAWDObserverDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyShimDelegate.h>

@class CellThroughputAdviser, NSString;

@interface CellThroughputAdviserEnvironment : ThroughputAdviserEnvironment <SymptomsAWDObserverDelegate, CoreTelephonyShimDelegate> {

	BOOL _registeredWithAWDObserver;
	CellThroughputAdviser* _cellThroughputAdviser;

}

@property (readonly) CellThroughputAdviser * cellThroughputAdviser;              //@synthesize cellThroughputAdviser=_cellThroughputAdviser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)handleEvent:(id)arg1 ;
-(void)infoHighThroughputChangedForSubscription:(id)arg1 ;
-(CellThroughputAdviser *)cellThroughputAdviser;
-(void)monitorSDMActivations:(BOOL)arg1 ;
@end

