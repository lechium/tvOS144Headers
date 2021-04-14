/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface CUIDSWriteRequest : NSObject {

	const char* writeBase;
	const char* writePtr;
	const char* writeEnd;
	CUIDSWriteRequest* next;
	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(id)completion;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletion:(id)arg1 ;
@end

