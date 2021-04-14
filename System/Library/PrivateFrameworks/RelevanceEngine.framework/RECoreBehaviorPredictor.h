/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPredictorObserver.h>

@class NSMapTable, NSString;

@interface RECoreBehaviorPredictor : REPredictor <REPredictorObserver> {

	NSMapTable* _locations;
	unsigned long long _dayValue;
	unsigned long long _hourValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)updateInterval;
+(id)supportedFeatures;
-(id)_init;
-(void)resume;
-(void)pause;
-(void)update;
-(void)predictorDidUpdate:(id)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
@end

