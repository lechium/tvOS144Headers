/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVHKMediaEntitiesSearchResponse, TVHKMediaEntitiesSearchResponseChanges;

@interface TVHKMediaEntitiesSearchControllerResult : NSObject {

	long long _queryReason;
	TVHKMediaEntitiesSearchResponse* _response;
	TVHKMediaEntitiesSearchResponseChanges* _responseChanges;

}

@property (nonatomic,retain) TVHKMediaEntitiesSearchResponse * response;                            //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) TVHKMediaEntitiesSearchResponseChanges * responseChanges;              //@synthesize responseChanges=_responseChanges - In the implementation block
@property (nonatomic,readonly) long long queryReason;                                               //@synthesize queryReason=_queryReason - In the implementation block
+(id)new;
-(id)description;
-(id)init;
-(void)setResponse:(TVHKMediaEntitiesSearchResponse *)arg1 ;
-(TVHKMediaEntitiesSearchResponse *)response;
-(long long)queryReason;
-(id)initWithQueryReason:(long long)arg1 response:(id)arg2 ;
-(void)setResponseChanges:(TVHKMediaEntitiesSearchResponseChanges *)arg1 ;
-(TVHKMediaEntitiesSearchResponseChanges *)responseChanges;
@end

