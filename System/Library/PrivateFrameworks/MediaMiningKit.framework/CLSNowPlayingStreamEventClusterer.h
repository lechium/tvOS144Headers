/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, CLSNowPlayingStreamEventClusteringParameters;

@interface CLSNowPlayingStreamEventClusterer : NSObject {

	NSArray* _sessions;
	CLSNowPlayingStreamEventClusteringParameters* _clusteringParameters;

}

@property (nonatomic,readonly) CLSNowPlayingStreamEventClusteringParameters * clusteringParameters;              //@synthesize clusteringParameters=_clusteringParameters - In the implementation block
@property (nonatomic,readonly) NSArray * sessions;                                                               //@synthesize sessions=_sessions - In the implementation block
-(id)init;
-(NSArray *)sessions;
-(void)clusterEvents:(id)arg1 ;
-(id)initWithClusteringParameters:(id)arg1 ;
-(void)naiveClusterEvents:(id)arg1 ;
-(void)dbScanClusterEvents:(id)arg1 ;
-(id)_dbScanClusterEvents:(id)arg1 ;
-(id)_populateSessionsWithClusters:(id)arg1 ;
-(CLSNowPlayingStreamEventClusteringParameters *)clusteringParameters;
@end

