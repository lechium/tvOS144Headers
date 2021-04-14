/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@interface _DKPredictor : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}
+(id)deviceActivityLikelihoodQueryPredicate;
+(id)predictorWithKnowledgeStore:(id)arg1 ;
-(id)deviceActivityLikelihood;
-(id)localInBedPeriod;
-(id)launchLikelihoodPredictionForApp:(id)arg1 ;
-(id)launchLikelihoodForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3 ;
-(id)pluginLikelihood;
-(id)displayOnLikelihood;
-(id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
-(id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
-(id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4 ;
-(id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 withDataPartitionType:(unsigned long long)arg4 asOfDate:(id)arg5 ;
-(id)expectedInBedPeriod;
@end

