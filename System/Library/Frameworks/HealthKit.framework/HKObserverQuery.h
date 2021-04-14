/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKObserverQueryClientInterface.h>

@class NSString;

@interface HKObserverQuery : HKQuery <HKObserverQueryClientInterface> {

	BOOL _observeUnfrozenSeries;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id updateHandler;                      //@synthesize updateHandler=_updateHandler - In the implementation block
@property (assign,nonatomic) BOOL observeUnfrozenSeries;              //@synthesize observeUnfrozenSeries=_observeUnfrozenSeries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(id)updateHandler;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)setObserveUnfrozenSeries:(BOOL)arg1 ;
-(void)client_dataUpdatedInDatabaseWithAnchor:(id)arg1 query:(id)arg2 ;
-(id)initWithSampleType:(id)arg1 predicate:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(BOOL)observeUnfrozenSeries;
@end

