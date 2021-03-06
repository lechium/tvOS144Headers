/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _CPLTimingStatistic : NSObject {

	unsigned long long _recordCount;
	unsigned long long _batchCount;
	unsigned long long _errorCount;
	unsigned long long _cancelCount;
	double _duration;

}
-(id)description;
-(void)updateWithDuration:(double)arg1 recordCount:(unsigned long long)arg2 error:(BOOL)arg3 cancelled:(BOOL)arg4 ;
@end

