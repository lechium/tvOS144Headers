/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PKDurationSnapshot : NSObject {

	 snapshotTime;
	 rate;
	 elapsedDuration;
	 duration;

}

@property (readonly,nonatomic) double snapshotTime; 
@property (readonly,nonatomic) float rate; 
@property (readonly,nonatomic) double elapsedDuration; 
@property (readonly,nonatomic) double duration; 
-(id)init;
-(double)duration;
-(float)rate;
-(double)snapshotTime;
-(double)elapsedDuration;
-(id)initWithSnapshotTime:(double)arg1 rate:(float)arg2 elapsedDuration:(double)arg3 duration:(double)arg4 ;
@end
