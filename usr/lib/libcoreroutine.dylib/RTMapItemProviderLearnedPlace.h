/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTLearnedLocationStore, RTMapItemProviderLearnedPlaceParameters, NSString;

@interface RTMapItemProviderLearnedPlace : RTMapItemProviderBase <RTMapItemProvider> {

	RTLearnedLocationStore* _learnedLocationStore;
	RTMapItemProviderLearnedPlaceParameters* _parameters;

}

@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;                            //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,copy,readonly) RTMapItemProviderLearnedPlaceParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTMapItemProviderLearnedPlaceParameters *)parameters;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedLocationStore:(id)arg3 ;
-(id)mapItemsWithOptions:(id)arg1 error:(id*)arg2 ;
-(RTLearnedLocationStore *)learnedLocationStore;
-(id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedLocationStore:(id)arg3 parameters:(id)arg4 ;
-(double)confidenceForPlaceType:(unsigned long long)arg1 ;
-(id)adjustConfidenceAndCollectMetrics:(id)arg1 learnedPlace:(id)arg2 maxConfidence:(double)arg3 ;
-(unsigned long long)coalescedMapItemSourceForPlace:(id)arg1 ;
-(id)learnedPlaceForInferredMapItem:(id)arg1 error:(id*)arg2 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
@end

