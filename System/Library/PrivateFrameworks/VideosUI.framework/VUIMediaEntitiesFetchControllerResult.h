/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface VUIMediaEntitiesFetchControllerResult : NSObject {

	long long _fetchReason;
	NSArray* _fetchResponses;
	NSArray* _fetchResponseChanges;

}

@property (assign,nonatomic) long long fetchReason;                     //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,copy) NSArray * fetchResponses;                    //@synthesize fetchResponses=_fetchResponses - In the implementation block
@property (nonatomic,copy) NSArray * fetchResponseChanges;              //@synthesize fetchResponseChanges=_fetchResponseChanges - In the implementation block
-(id)description;
-(id)init;
-(long long)fetchReason;
-(void)setFetchReason:(long long)arg1 ;
-(NSArray *)fetchResponses;
-(NSArray *)fetchResponseChanges;
-(void)setFetchResponseChanges:(NSArray *)arg1 ;
-(id)initWithFetchReason:(long long)arg1 fetchResponses:(id)arg2 ;
-(void)setFetchResponses:(NSArray *)arg1 ;
@end

