/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDUserActionPredictionDataSource
@property (getter=isDataAvailableForUserActionPredictionDataSource,readonly) BOOL dataAvailableForUserActionPredictionDataSource; 
@required
-(BOOL)isDataAvailableForUserActionPredictionDataSource;
-(id)fetchPredictionsWithLimitForUserActionPredictionDataSource:(unsigned long long)arg1;
-(id)addOrUpdateUserActionPredictions:(id)arg1;
-(id)addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(id)arg1;
-(id)removeUserActionPredictions:(id)arg1;

@end

