/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@interface HMDAnalyticsUpdateEventTriggerData : HMFObject {

	int _requestOrigin;
	unsigned _resultErrorCode;
	int _updateType;
	unsigned long long _timestamp;

}

@property (assign) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) int requestOrigin;                         //@synthesize requestOrigin=_requestOrigin - In the implementation block
@property (assign) unsigned resultErrorCode;                  //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (assign) int updateType;                            //@synthesize updateType=_updateType - In the implementation block
-(unsigned long long)timestamp;
-(int)updateType;
-(void)setUpdateType:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setRequestOrigin:(int)arg1 ;
-(void)setResultErrorCode:(unsigned)arg1 ;
-(unsigned)resultErrorCode;
-(int)requestOrigin;
@end

