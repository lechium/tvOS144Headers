/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface PPContactRecordResultBuffer : NSObject {

	BOOL _loadingComplete;
	NSMutableArray* _records;

}

@property (nonatomic,readonly) NSMutableArray * records;              //@synthesize records=_records - In the implementation block
@property (assign,nonatomic) BOOL loadingComplete;                    //@synthesize loadingComplete=_loadingComplete - In the implementation block
-(id)init;
-(NSMutableArray *)records;
-(BOOL)loadingComplete;
-(void)setLoadingComplete:(BOOL)arg1 ;
@end

